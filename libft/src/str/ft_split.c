/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victorcvaz <victorcvaz@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 17:47:20 by vcesar-v          #+#    #+#             */
/*   Updated: 2023/09/14 20:58:24 by victorcvaz       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"

static	int	ft_fill_result(char **result, char const *s, char c, int matriz_i);
static	int	ft_count_words(const char *str, char c);

char	**ft_split(char const *s, char c)
{
	char	**result;
	size_t	matriz_i;
	size_t	i;

	if (!s)
		return (NULL);
	matriz_i = ft_count_words(s, c);
	result = (char **)malloc(sizeof(char *) * (matriz_i + 1));
	if (!result)
		return (NULL);
	if (!ft_fill_result(result, s, c, matriz_i))
	{
		i = 0;
		while (result[i] != NULL)
		{
			free(result[i]);
			i++;
		}
		free(result);
		return (NULL);
	}
	return (result);
}

static	int	ft_fill_result(char **result, char const *s, char c, int matriz_i)
{
	int	res_i;
	int	curr_i;
	int	word_len;

	res_i = 0;
	curr_i = 0;
	while (s[curr_i] && res_i < matriz_i)
	{
		word_len = 0;
		while (s[curr_i] == c && s[curr_i])
			curr_i++;
		while (s[curr_i + word_len] != c && s[curr_i + word_len])
			word_len++;
		result[res_i] = ft_substr(s, curr_i, word_len);
		if (result[res_i] == NULL)
			return (0);
		res_i++;
		curr_i += word_len + 1;
	}
	result[res_i] = NULL;
	return (1);
}

static	int	ft_count_words(const char *s, char c)
{
	int		i;
	int		trigger;
	char	*str;

	i = 0;
	trigger = 0;
	str = (char *) s;
	while (*str)
	{
		if (*str != c && trigger == 0)
		{
			trigger = 1;
			i++;
		}
		else if (*str == c)
			trigger = 0;
		str++;
	}
	return (i);
}
