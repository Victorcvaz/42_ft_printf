/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victorcvaz <victorcvaz@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 17:47:04 by vcesar-v          #+#    #+#             */
/*   Updated: 2023/09/19 10:41:23 by victorcvaz       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"

ssize_t	ft_putnbr_fd(long int n, int fd)
{
	char	*nbr;
	ssize_t	bytes;

	nbr = ft_itoa(n);
	if (!nbr)
		return (ft_putstr_fd(NULL, fd));
	bytes = ft_putstr_fd(nbr, fd);
	free(nbr);
	return (bytes);
}
