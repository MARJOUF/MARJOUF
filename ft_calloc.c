/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akmarjou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 10:58:17 by akmarjou          #+#    #+#             */
/*   Updated: 2026/10/14 10:58:19 by akmarjou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char *arr;
	size_t reslt;

	if (size != 0 && nmemb > (size_t)-1 / size)
		return (NULL);
	reslt = nmemb * size;
	arr = malloc(reslt * sizeof(char));
	if (arr == NULL)
		return (NULL);
	ft_bzero(arr, reslt);
	return ((void *)arr);
}