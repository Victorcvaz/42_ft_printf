/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base_fd.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcesar-v <vcesar-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 10:07:22 by victorcvaz        #+#    #+#             */
/*   Updated: 2023/09/30 17:20:20 by vcesar-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

ssize_t	ft_putnbr_base_fd(long int nbr, char *base, int fd)
{
	ssize_t	total_bytes;
	size_t	base_len;

	if (ft_check_base_errors(base))
		return (0);
	base_len = ft_strlen(base);
	total_bytes = 0;
	if (nbr < 0)
	{
		total_bytes += ft_putchar_fd('-', fd);
		nbr = -nbr;
	}
	if (nbr >= (long int)base_len)
		total_bytes += ft_putnbr_base_fd(nbr / base_len, base, fd);
	total_bytes += ft_putchar_fd(base[nbr % base_len], fd);
	return (total_bytes);
}
