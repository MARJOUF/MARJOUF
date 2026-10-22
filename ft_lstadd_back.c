/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akmarjou <akmarjou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/18 13:58:06 by akmarjou          #+#    #+#             */
/*   Updated: 2026/10/19 11:44:47 by akmarjou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*temp;

	if (!lst || !new)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	temp = ft_lstlast(*lst);
	temp->next = new;
}
/*
int	main(void)
{
	t_list	*n;
	t_list	*node1;
	t_list	*node2;
	t_list	*head;
	t_list	*new;
	t_list	*node3;
	int		a;
	int		b;
	int		c;
	int		hamza;

	a = 10;
	b = 20;
	c = 30;
	hamza = 40;
	node1 = malloc(sizeof(t_list));
	node2 = malloc(sizeof(t_list));
	node3 = malloc(sizeof(t_list));
	new = malloc(sizeof(t_list));
	if (!new || !node1 || !node2 || !node3)
		return (1);
	node1->content = &a;
	node1->next = node2;
	node2->content = &b;
	node2->next = node3;
	node3->content = &c;
	node3->next = NULL;
	new->content = &hamza;
	head = node1;
	ft_lstadd_back(&head, new);
	n = head;
	while (n)
	{
		printf("%d\n", *(int *)n->content);
		n = n->next;
	}
}
*/
