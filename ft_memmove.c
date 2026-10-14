/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akmarjou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/12 18:33:10 by akmarjou          #+#    #+#             */
/*   Updated: 2026/10/13 12:42:44 by akmarjou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t					i;
	unsigned char			*dest2;
	const unsigned char		*src2;

	dest2 = (unsigned char *) dest;
	src2 = (const unsigned char *) src;
	if (n == 0)
		return (dest);
	if (dest2 < src2)
	{
		i = 0;
		while (i < n)
		{
			dest2[i] = src2[i];
			i++;
		}
	}
	else
	{
		while (n--)
			dest2[n] = src2[n];
	}
	return (dest);
}
