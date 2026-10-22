/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akmarjou <akmarjou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/17 08:37:36 by akmarjou          #+#    #+#             */
/*   Updated: 2026/10/17 08:37:39 by akmarjou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_calcul_argument(int n)
{
	int	count;

	count = 0;
	if (n == INT_MIN)
	{
		count += 1;
		n = -147483648;
	}
	if (n < 0)
	{
		count += 1;
		n *= -1;
	}
	if (n == 0)
		count += 1;
	while (n > 0)
	{
		n /= 10;
		count += 1;
	}
	return (count);
}

static char	*ft_argument(int n, int count_argument, char *argument)
{
	while (n > 0)
	{
		argument[count_argument] = (n % 10) + '0';
		n /= 10;
		count_argument--;
	}
	return (argument);
}

char	*ft_itoa(int n)
{
	char	*argument;
	int		count_argument;

	count_argument = ft_calcul_argument(n);
	argument = malloc(count_argument + 1);
	if (argument == NULL)
		return (NULL);
	if (n == INT_MIN)
	{
		argument[1] = '2';
		n = -147483648;
	}
	if (n < 0)
	{
		argument[0] = '-';
		n *= -1;
	}
	if (n == 0)
		argument[0] = '0';
	argument[count_argument--] = '\0';
	return (ft_argument(n, count_argument, argument));
}
/*
#include <stdio.h>

int	main(void)
{
	char	*s;

	s = ft_itoa(0);
	printf("0           -> %s\n", s);
	free(s);

	s = ft_itoa(7);
	printf("7           -> %s\n", s);
	free(s);

	s = ft_itoa(-7);
	printf("-7          -> %s\n", s);
	free(s);

	s = ft_itoa(10);
	printf("10          -> %s\n", s);
	free(s);

	s = ft_itoa(123);
	printf("123         -> %s\n", s);
	free(s);

	s = ft_itoa(-123);
	printf("-123        -> %s\n", s);
	free(s);

	s = ft_itoa(1000);
	printf("1000        -> %s\n", s);
	free(s);

	s = ft_itoa(INT_MAX);
	printf("INT_MAX     -> %s\n", s);
	free(s);

	s = ft_itoa(INT_MIN);
	printf("INT_MIN     -> %s\n", s);
	free(s);

	return (0);
}*/