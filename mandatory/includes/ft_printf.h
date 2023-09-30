/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcesar-v <vcesar-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 13:47:05 by victorcvaz        #+#    #+#             */
/*   Updated: 2023/09/30 17:22:59 by vcesar-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

# define STDOUT_FILENO 1
# define DECIMAL_BASE "0123456789"
# define HEX_LOWER_BASE "0123456789abcdef"
# define HEX_UPPER_BASE "0123456789ABCDEF"

int		ft_printf(const char *str, ...);
int		ft_putptr(unsigned long nbr, char *base);
int		ft_check_base_errors(char *base);
ssize_t	ft_putchar_fd(char c, int fd);
ssize_t	ft_putnbr_base_u_fd(unsigned long int nbr, char *base, int fd);
ssize_t	ft_putnbr_base_fd(long int nbr, char *base, int fd);
ssize_t	ft_putstr_fd(char *s, int fd);
size_t	ft_strlen(const char *s);

#endif
