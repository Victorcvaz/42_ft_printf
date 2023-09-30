/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victorcvaz <victorcvaz@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 17:53:16 by vcesar-v          #+#    #+#             */
/*   Updated: 2023/09/14 20:58:38 by victorcvaz       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ptr;
	size_t	str_len;
	size_t	i;

	if (!s1 && !s2)
		return (NULL);
	str_len = ft_strlen(s1) + ft_strlen(s2);
	ptr = (char *) malloc(sizeof(char) * (str_len + NULL_BYTE));
	if (!ptr)
		return (NULL);
	i = 0;
	while (s1 && *s1 != '\0')
		ptr[i++] = *s1++;
	while (s2 && *s2 != '\0')
		ptr[i++] = *s2++;
	ptr[i] = '\0';
	return (ptr);
}
