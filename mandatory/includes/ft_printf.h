/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victorcvaz <victorcvaz@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 13:47:05 by victorcvaz        #+#    #+#             */
/*   Updated: 2023/09/22 03:45:29 by victorcvaz       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include "../../libft/libft.h"

# define STDOUT_FILENO 1
# define DECIMAL_BASE "0123456789"
# define HEX_LOWER_BASE "0123456789abcdef"
# define HEX_UPPER_BASE "0123456789ABCDEF"

int	ft_printf(const char *str, ...);
int	ft_putptr(unsigned long nbr, char *base);


#endif
