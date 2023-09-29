/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calc_nbr_digits.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victorcvaz <victorcvaz@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 14:46:10 by victorcvaz        #+#    #+#             */
/*   Updated: 2023/09/18 15:08:43 by victorcvaz       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_calc_nbr_digits(long int number, int base_len)
{
	int	nbr_digits;

	nbr_digits = 1;
	if (number < 0)
		nbr_digits++;
	while (number)
	{
		number /= base_len;
		nbr_digits++;
	}
	return (nbr_digits);
}
