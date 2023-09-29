/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victorcvaz <victorcvaz@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 15:13:08 by victorcvaz        #+#    #+#             */
/*   Updated: 2023/09/29 09:52:01 by victorcvaz       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

char	*ft_itoa_base(long int number, char *base)
{
	char	*nbr_str;
	int		nbr_digits;
	int		base_len;

	if (ft_check_base_errors(base))
		return (NULL);
	base_len = ft_strlen(base);
	nbr_digits = ft_calc_nbr_digits(number, base_len);
	nbr_str = (char *)malloc(sizeof(char) * (nbr_digits + 1));
	if (!nbr_str)
		return (NULL);
	if (number == 0)
		nbr_str[0] = 0;
	nbr_str[nbr_digits] = '\0';
	if (number < 0)
	{
		nbr_str[0] = '-';
		number *= -1;
	}
	while (number)
	{
		nbr_str[--nbr_digits] = base[number % base_len];
		number /= base_len;
	}
	return (nbr_str);
}
