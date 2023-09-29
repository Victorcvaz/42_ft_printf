/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_u_fd.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victorcvaz <victorcvaz@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 12:43:57 by victorcvaz        #+#    #+#             */
/*   Updated: 2023/09/29 16:08:37 by victorcvaz       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

ssize_t	ft_putnbr_fd(long int nbr, int fd)
{
	unsigned int	base_len;
	ssize_t			total_bytes;

	total_bytes = 0;
	base_len = 10;
	if (nbr == 0)
		return (ft_putchar_fd('0', fd));
	if (nbr < 0)
	{
		ft_putchar_fd('-', fd);
		nbr = -nbr;
	}
	while (nbr >= base_len)
		total_bytes += ft_putnbr_fd(nbr / base_len, fd);
	total_bytes += ft_putchar_fd((nbr % 10) + '0', fd);
	return (total_bytes);
}
