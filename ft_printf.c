/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victorcvaz <victorcvaz@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 13:44:28 by victorcvaz        #+#    #+#             */
/*   Updated: 2023/09/21 16:22:35 by victorcvaz       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

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
			total_bytes += handle_type(*format, args);
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
	else if (type == 's')
		return ((int)ft_putstr_fd(va_arg(args, char *), STDOUT_FILENO));
	else if (type == 'p')
		return (ft_putptr(va_arg(args, unsigned long), HEX_LOWER_BASE));
	else if (type == 'd' || type == 'i')
		return ((int)ft_putnbr_base_fd(va_arg(args, int), 
				DECIMAL_BASE, STDOUT_FILENO));
	else if (type == 'u')
		return ((int)ft_putnbr_base_fd(va_arg(args, unsigned int),
				DECIMAL_BASE, STDOUT_FILENO));
	else if (type == 'x')
		return ((int)ft_putnbr_base_fd(va_arg(args, unsigned int),
				HEX_LOWER_BASE, STDOUT_FILENO));
	else if (type == 'X')
		return ((int)ft_putnbr_base_fd(va_arg(args, unsigned int),
				HEX_UPPER_BASE, STDOUT_FILENO));
	else if (type == '%')
		return ((int)ft_putchar('%'));
	else
		return (0);
}
