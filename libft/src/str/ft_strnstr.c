/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victorcvaz <victorcvaz@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 17:53:56 by vcesar-v          #+#    #+#             */
/*   Updated: 2023/09/14 20:59:01 by victorcvaz       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	size_t	h_index;
	size_t	n_index;

	h_index = 0;
	if (*needle == '\0')
		return ((char *)haystack);
	while (haystack[h_index] != '\0' && h_index < n)
	{
		n_index = 0;
		while (needle[n_index] == haystack[h_index + n_index]
			&& h_index + n_index < n)
		{
			if (needle[n_index + 1] == '\0')
				return ((char *)&haystack[h_index]);
			n_index++;
		}
		h_index++;
	}
	return (NULL);
}
