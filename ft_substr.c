/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akmarjou <akmarjou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 16:11:07 by akmarjou          #+#    #+#             */
/*   Updated: 2026/10/15 14:24:33 by akmarjou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_doo(char *arr, char *str, unsigned int start, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		arr[i] = str[start];
		start++;
		i++;
	}
	return (arr);
}

static char	*ft_chack_valid(void)
{
	char	*rr;

	rr = malloc(1);
	if (rr == NULL)
		return (NULL);
	rr[0] = '\0';
	return (rr);
}

static size_t	ft_count(size_t ln_s2, unsigned int strt, size_t ln2)
{
	size_t	cnt;
	size_t	size;

	cnt = ln_s2 - strt;
	if (cnt < ln2)
		size = cnt;
	else
		size = ln2;
	return (size);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	len_s;
	size_t	size;
	char	*arr;

	len_s = ft_strlen(s);
	if (start > len_s)
		return (ft_chack_valid());
	else if ((start == len_s) || (len == 0))
		return (ft_chack_valid());
	size = ft_count(len_s, start, len);
	arr = malloc(size + 1);
	if (arr == NULL)
		return (NULL);
	ft_doo(arr, (char *)s, start, size);
	arr[size] = '\0';
	return (arr);
}
