/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akmarjou <akmarjou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 10:18:10 by akmarjou          #+#    #+#             */
/*   Updated: 2026/10/19 10:18:11 by akmarjou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (lst == NULL || del == NULL)
		return ;
	if (del)
		del(lst->content);
	free(lst);
}
/*
#include <stdio.h>

int	main(void)
{
	t_list *n = ft_lstnew(ft_strdup("salam"));
	ft_lstdelone(n, ft_chihaja);
}*/