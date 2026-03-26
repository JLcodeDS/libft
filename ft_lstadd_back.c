/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonathanludolph1 <jonathanludolph1@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/25 12:15:04 by jonathanlud       #+#    #+#             */
/*   Updated: 2026/03/25 12:15:19 by jonathanlud      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*temp;

	if (!lst || !new)
		return ;
	temp = *lst;
	while (temp-> next != NULL)
		temp = temp -> next;
	temp -> next = new;
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
// 	node2 -> next = NULL;
// 	node3 -> next = NULL;

// 	t_list *temp = node1;
// 	while (temp)
// 	{
// 		printf("%d\n", *(int *)(temp -> content));
// 		temp = temp -> next;
// 	}
// 	ft_lstadd_back(&node1, node3);
// 	temp = node1;
// 	while (temp)
// 	{
// 		printf("%d\n", *(int *)(temp -> content));
// 		temp = temp -> next;
// 	}
// 	free(node1);
// 	free(node2);
// 	free(node3);
// }