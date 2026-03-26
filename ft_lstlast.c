/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonathanludolph1 <jonathanludolph1@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/25 12:16:26 by jonathanlud       #+#    #+#             */
/*   Updated: 2026/03/25 12:16:39 by jonathanlud      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*temp;

	temp = lst;
	while (temp -> next != NULL)
	{
		temp = temp -> next;
	}
	return (temp);
}

// int main()
// {
// 	t_list *node1 = malloc(sizeof(t_list));
// 	t_list *node2 = malloc(sizeof(t_list));
// 	t_list *node3 = malloc(sizeof(t_list));

// 	int i = 1;
// 	int j = 2;
// 	node1 -> content = &i;
// 	node2 -> content = &i;
// 	node3 -> content = &j;
// 	node1 -> next = node2;
// 	node2 -> next = node3;
// 	node3 -> next = NULL;

// 	printf("%d\n", *(int *)(ft_lstlast(node1) -> content));
// 	free(node1);
// 	free(node2);
// 	free(node3);
// }