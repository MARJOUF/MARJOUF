/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akmarjou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 23:27:56 by akmarjou          #+#    #+#             */
/*   Updated: 2026/10/13 23:28:02 by akmarjou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t i;
	size_t a;
	size_t count;
	size_t len_little;

	len_little = ft_strlen(little);
	i = 0;
	count = 0;
	if (little[i] == '\0')
		return ((char *)big);
	while (big[i] && i < len)
	{
		count = 0;
		a = 0;
		while (i + a < len && little[a] && big[i + a] == little[a])
		{
			count += 1;
			a++;
		}
		if (count == len_little)
			return ((char *)(big + i));
		i++;
	}
	return (NULL);
}