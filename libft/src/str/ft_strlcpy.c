/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victorcvaz <victorcvaz@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 17:53:29 by vcesar-v          #+#    #+#             */
/*   Updated: 2023/09/14 20:58:45 by victorcvaz       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	src_index;

	src_index = 0;
	if (size == 0 || !dest)
		return (ft_strlen(src));
	while (src[src_index] != '\0' && src_index < size - 1)
	{
		dest[src_index] = src[src_index];
		src_index++;
	}
	dest[src_index] = '\0';
	return (ft_strlen(src));
}
