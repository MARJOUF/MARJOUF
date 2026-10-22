/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akmarjou <akmarjou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 10:41:26 by akmarjou          #+#    #+#             */
/*   Updated: 2026/10/19 11:52:14 by akmarjou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (lst == NULL || f == NULL)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}
/*
#include <stdio.h>

int	main(void)
{
	t_list	*head;
	t_list	*temp;
	char	a[] = "a";
	char	b[] = "b";
	char	c[] = "c";

	head = NULL;
	ft_lstadd_back(&head, ft_lstnew((char *)a));
	ft_lstadd_back(&head, ft_lstnew((char *)b));
	ft_lstadd_back(&head, ft_lstnew((char *)c));
	temp = head;
	ft_lstiter(head, diri_chihaja);
	while (temp)
	{
		printf("%s\n", (char *)temp->content);
		temp = temp->next;
	}
}
*/