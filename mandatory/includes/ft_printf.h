/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victorcvaz <victorcvaz@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 13:47:05 by victorcvaz        #+#    #+#             */
/*   Updated: 2023/09/29 16:18:56 by victorcvaz       ###   ########.fr       */
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
int		ft_calc_nbr_digits(long int number, int base_len);
int		ft_check_base_errors(char *base);
char	*ft_itoa_base(long int number, char *base);
ssize_t	ft_putchar_fd(char c, int fd);
ssize_t	ft_putnbr_fd(long int nbr, int fd);
ssize_t	ft_putnbr_base_fd(unsigned long int nbr, char *base, int fd);
ssize_t	ft_putstr_fd(char *s, int fd);
size_t	ft_strlen(const char *s);

#endif
