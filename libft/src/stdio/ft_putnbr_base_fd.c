/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base_fd.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcesar-v <vcesar-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 10:07:22 by victorcvaz        #+#    #+#             */
/*   Updated: 2023/09/28 17:45:55 by vcesar-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"

ssize_t	ft_putnbr_base_fd(long int nbr, char *base, int fd)
{
	char	*nbr_base;
	ssize_t	bytes;

	nbr_base = ft_itoa_base(nbr, base);
	if (!nbr_base)
		return (ft_putstr_fd(NULL, fd));
	bytes = ft_putstr_fd(nbr_base, fd);
	free(nbr_base);
	return (bytes);
}
