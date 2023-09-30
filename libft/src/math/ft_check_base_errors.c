/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_base_errors.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victorcvaz <victorcvaz@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 19:23:48 by victorcvaz        #+#    #+#             */
/*   Updated: 2023/09/19 11:01:50 by victorcvaz       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"

int	check_base_errors(char *base)
{
	int	index_i;
	int	index_j;
	int	base_len;

	index_i = 0;
	base_len = ft_strlen(base);
	if (base_len < 2)
		return (1);
	while (index_i < base_len)
	{
		if (base[index_i] == ' '
			|| (base[index_i] >= '\t' && base[index_i] <= '\r'))
			return (1);
		if (base[index_i] == '+' || base[index_i] == '-')
			return (1);
		index_j = index_i + 1;
		while (index_j < base_len)
		{
			if (base[index_i] == base[index_j])
				return (1);
			index_j++;
		}
		index_i++;
	}
	return (0);
}
