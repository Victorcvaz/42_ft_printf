/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victorcvaz <victorcvaz@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 17:46:02 by vcesar-v          #+#    #+#             */
/*   Updated: 2023/09/14 20:57:22 by victorcvaz       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"

static int	ft_nbrlen(int n);

char	*ft_itoa(int n)
{
	long	ln;
	char	*result;
	int		result_index;
	int		digit;

	result = (char *)malloc(sizeof(char) * (ft_nbrlen(n) + 1));
	if (!result)
		return (NULL);
	result_index = ft_nbrlen(n);
	result[result_index] = '\0';
	ln = (long) n;
	if (n < 0)
		result[0] = '-';
	while (ln)
	{
		digit = ln % 10;
		if (digit < 0)
			digit *= -1;
		result[--result_index] = digit + '0';
		ln /= 10;
	}
	if (n == 0)
		result[0] = '0';
	return (result);
}

static int	ft_nbrlen(int n)
{
	int		len;
	long	ln;

	if (n == 0)
		return (1);
	len = 0;
	ln = (long)n;
	if (ln < 0)
	{
		ln = -ln;
		len++;
	}
	while (ln > 0)
	{
		ln /= 10;
		len++;
	}
	return (len);
}
