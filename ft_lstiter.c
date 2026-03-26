/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonathanludolph1 <jonathanludolph1@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/25 12:16:12 by jonathanlud       #+#    #+#             */
/*   Updated: 2026/03/25 12:16:20 by jonathanlud      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

// void ft_add(void *val);

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*temp;

	temp = lst;
	while (temp)
	{
		f(temp -> content);
		temp = temp -> next;
	}
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
// 	ft_lstiter(node1, ft_add);
// 	temp = node1;
// 	while (temp)
// 	{
// 		printf("%d\n", *(int *)(temp -> content));
// 		temp = temp -> next;
// 	}
// }

// void ft_add(void *val)
// {
// 	printf("FUNC %d\n", *(int *)val + 1);
// }