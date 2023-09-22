/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victorcvaz <victorcvaz@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 16:53:58 by victorcvaz        #+#    #+#             */
/*   Updated: 2023/09/22 03:28:29 by victorcvaz       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_putptr(unsigned long nbr, char *base)
{
	int	total_bytes;
	int	base_len;

	total_bytes = 0;
	base_len = ft_strlen(base);
	if (nbr == 0)
		return (ft_putstr_fd("(nil)", STDOUT_FILENO));
	if (nbr >= (unsigned long)base_len)
		total_bytes += ft_putptr(nbr / base_len, base);
	else
		total_bytes += ft_putstr_fd("0x", STDOUT_FILENO);
	total_bytes += ft_putchar_fd(base[nbr % base_len], STDOUT_FILENO);
	return (total_bytes);
}
