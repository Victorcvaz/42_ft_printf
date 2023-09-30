/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victorcvaz <victorcvaz@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 17:53:22 by vcesar-v          #+#    #+#             */
/*   Updated: 2023/09/14 20:58:43 by victorcvaz       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	src_index;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	if (size <= dst_len)
		return (src_len + size);
	src_index = 0;
	while (src[src_index] && dst_len + src_index < size - 1)
	{
		dst[dst_len + src_index] = src[src_index];
		src_index++;
	}
	dst[dst_len + src_index] = '\0';
	return (src_len + dst_len);
}
