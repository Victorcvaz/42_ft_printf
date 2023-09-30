/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victorcvaz <victorcvaz@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 16:21:41 by victorcvaz        #+#    #+#             */
/*   Updated: 2023/09/18 17:20:19 by victorcvaz       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"

int	ft_atoi_base(char *str, char *base)
{
	int	index;
	int	nbr;
	int	sign;
	int	base_len;

	index = 0;
	nbr = 0;
	sign = 1;
	base_len = ft_strlen(base);
	if (base_len < 2 || check_base_errors(base))
		return (nbr);
	while (str[index] == ' ' || (str[index] >= '\t' && str[index] <= '\r'))
		index++;
	while (str[index] == '+' || str[index] == '-')
	{
		if (str[index] == '-')
			sign *= -1;
		index++;
	}
	while (str[index] && ft_strchr(base, str[index]))
	{
		nbr = nbr * base_len + (ft_strchr(base, str[index]) - base);
		index++;
	}
	return (nbr * sign);
}
