/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akmarjou <akmarjou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/17 14:13:39 by akmarjou          #+#    #+#             */
/*   Updated: 2026/10/17 14:42:16 by akmarjou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
	{
		ft_putchar_fd('-', fd);
		ft_putchar_fd('2', fd);
		n = 147483648;
	}
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n *= -1;
	}
	if (n >= 10)
		ft_putnbr_fd(n / 10, fd);
	ft_putchar_fd((n % 10) + '0', fd);
}
/*
#include <stdio.h>
int main()
{
	ft_putnbr_fd(0, 1);           // 0
	ft_putchar_fd('\n', 1);
ft_putnbr_fd(5, 1);           // 5
ft_putchar_fd('\n', 1);
ft_putnbr_fd(10, 1);          // 10
ft_putchar_fd('\n', 1);
ft_putnbr_fd(123, 1);         // 123
ft_putchar_fd('\n', 1);
ft_putnbr_fd(-123, 1);        // -123
ft_putchar_fd('\n', 1);
ft_putnbr_fd(2147483647, 1);  // 2147483647
ft_putchar_fd('\n', 1);
ft_putnbr_fd(INT_MIN, 1);     // -2147483648
}*/
