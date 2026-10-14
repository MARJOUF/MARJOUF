/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akmarjou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 15:31:06 by akmarjou          #+#    #+#             */
/*   Updated: 2026/10/13 22:55:20 by akmarjou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*a;

	a = s;
	while (*s)
		s++;
	if (c == '\0')
		return ((char *)s);
	if (s == a)
		return (NULL);
	s--;
	while (s > a)
	{
		if (*s == c)
			return ((char *)s);
		s--;
	}
	if (*a == c)
		return ((char *)a);
	return (NULL);
}
