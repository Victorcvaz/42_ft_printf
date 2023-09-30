/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victorcvaz <victorcvaz@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 17:54:00 by vcesar-v          #+#    #+#             */
/*   Updated: 2023/09/14 20:59:04 by victorcvaz       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	str_len;

	str_len = ft_strlen(s);
	if ((char) c == '\0')
		return ((char *) &s[str_len]);
	while (str_len > 0)
	{
		str_len--;
		if (s[str_len] == (char) c)
			return ((char *) &s[str_len]);
	}
	return (NULL);
}
