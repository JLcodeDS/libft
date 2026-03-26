/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonathanludolph1 <jonathanludolph1@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/25 12:15:38 by jonathanlud       #+#    #+#             */
/*   Updated: 2026/03/25 12:15:55 by jonathanlud      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

// void ft_delete(void *val);

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*temp;
	t_list	*prev;

	prev = *lst;
	while (prev)
	{
		del(prev -> content);
		temp = prev -> next;
		free(prev);
		prev = temp;
	}
	*lst = NULL;
}

// int main()
// {
// 	t_list *node1 = malloc(sizeof(t_list));
// 	t_list *node2 = malloc(sizeof(t_list));
// 	t_list *node3 = malloc(sizeof(t_list));

// 	int i = 1;
// 	int j = 2;
// 	int k = 3;
// 	node1 -> content = &i;
// 	node2 -> content = &j;
// 	node3 -> content = &k;
// 	node1 -> next = node2;
// 	node2 -> next = node3;
// 	node3 -> next = NULL;

// 	t_list *temp = node1;
// 	while (temp)
// 	{
// 		printf("%d\n", *(int *)(temp -> content));
// 		temp = temp -> next;
// 	}
// 	ft_lstclear(&node3, ft_delete);
// 	temp = node1;
// 	while (temp)
// 	{
// 		printf("%d\n", *(int *)(temp -> content));
// 		temp = temp -> next;
// 	}
// }

// void ft_delete(void *val)
// {
// 	val = NULL;
// }