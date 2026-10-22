/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akmarjou <akmarjou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 09:56:02 by akmarjou          #+#    #+#             */
/*   Updated: 2026/10/19 09:56:14 by akmarjou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;

	if (lst == NULL || del == NULL)
		return ;
	while (*lst)
	{
		temp = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = temp;
	}
}
/*
int	main(void)
{
	t_list *head = NULL;
	char *a = "a";
	char *b = "b";
	char *c = "c";
	ft_lstadd_front(&head, ft_lstnew((char*)a));
	ft_lstadd_front(&head, ft_lstnew((char*)b));
	ft_lstadd_front(&head, ft_lstnew((char*)c));

	ft_lstclear(&head, del_str);
	printf("%p\n", (void *)head); // (nil)
	return (0);
}*/