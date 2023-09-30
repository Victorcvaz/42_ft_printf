/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcesar-v <vcesar-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 13:44:28 by victorcvaz        #+#    #+#             */
/*   Updated: 2023/09/30 17:21:13 by vcesar-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

static int	handle_type(char type, va_list args);

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		total_bytes;

	total_bytes = 0;
	va_start(args, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			total_bytes += handle_type(*format++, args);
		}
		else
			total_bytes += ft_putchar_fd(*format++, STDOUT_FILENO);
	}
	va_end(args);
	return (total_bytes);
}

static int	handle_type(char type, va_list args)
{
	if (type == 'c')
		return ((int)ft_putchar_fd(va_arg(args, int), STDOUT_FILENO));
	if (type == 's')
		return ((int)ft_putstr_fd(va_arg(args, char *), STDOUT_FILENO));
	if (type == 'p')
		return (ft_putptr(va_arg(args, unsigned long), HEX_LOWER_BASE));
	if (type == 'd' || type == 'i')
		return ((int)ft_putnbr_base_fd(va_arg(args, int), DECIMAL_BASE,
				STDOUT_FILENO));
	if (type == 'u')
		return ((int)ft_putnbr_base_u_fd(va_arg(args, unsigned int),
				DECIMAL_BASE, STDOUT_FILENO));
	if (type == 'x')
		return ((int)ft_putnbr_base_u_fd(va_arg(args, unsigned int),
				HEX_LOWER_BASE, STDOUT_FILENO));
	if (type == 'X')
		return ((int)ft_putnbr_base_u_fd(va_arg(args, unsigned int),
				HEX_UPPER_BASE, STDOUT_FILENO));
	if (type == '%')
		return ((int)ft_putchar_fd('%', STDOUT_FILENO));
	return (0);
}
