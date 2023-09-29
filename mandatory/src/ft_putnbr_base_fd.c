/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base_fd.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victorcvaz <victorcvaz@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 10:07:22 by victorcvaz        #+#    #+#             */
/*   Updated: 2023/09/29 16:18:35 by victorcvaz       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

ssize_t	ft_putnbr_base_fd(unsigned long int nbr, char *base, int fd)
{
	char	*nbr_base;
	ssize_t	total_bytes;

	if (ft_check_base_errors(base))
		return (0);
	return (total_bytes);
}
