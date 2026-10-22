/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akmarjou <akmarjou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/18 13:40:12 by akmarjou          #+#    #+#             */
/*   Updated: 2026/10/19 11:42:58 by akmarjou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (lst == NULL)
		return (NULL);
	while (lst->next != NULL)
	{
		lst = lst->next;
	}
	return (lst);
}
/*
#include <stdio.h>
int main()
{
	t_list *n;
    t_list *node1;
    t_list *node2;
    t_list *head;
    t_list *new;
    t_list *node3;
    int a = 10;
    int b = 20;
    int c = 30;
    int hamza = 40;

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
    printf("%d\n", *(int *)ft_lstlast(head));
}*/
