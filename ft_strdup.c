/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akmarjou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 15:19:13 by akmarjou          #+#    #+#             */
/*   Updated: 2026/10/14 15:19:15 by akmarjou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char    *ft_cpy(char *dest, char *src)
{
    size_t i;

    i = 0;
    while (src[i])
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (dest);
}

char    *ft_strdup(const char *s)
{
    char    *arr;
    size_t  len_s;

    len_s = ft_strlen(s);
    arr = malloc((len_s +1) * sizeof(char));
    if (arr == NULL)
        return (NULL);
    ft_cpy(arr, (char *)s);
    return (arr);
}

#include <stdio.h>

int main()
{
    char *s = "akram sdsdsd";
    char *p;

    p = ft_strdup(s);
    printf("%s", p);
    return 0;
}