/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonathanludolph1 <jonathanludolph1@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/25 12:16:46 by jonathanlud       #+#    #+#             */
/*   Updated: 2026/03/25 12:16:50 by jonathanlud      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*temp_lst;
	t_list	*temp_new;

	temp_lst = lst;
	new_lst = ft_lstnew(f(temp_lst -> content));
	if (!new_lst)
		return (NULL);
	temp_new = new_lst;
	temp_lst = temp_lst -> next;
	while (temp_lst)
	{
		temp_new = ft_lstnew(f(temp_lst -> content));
		if (!temp_new)
			ft_lstclear(&new_lst, del);
		ft_lstadd_back(&new_lst, temp_new);
		temp_lst = temp_lst -> next;
	}
	return (new_lst);
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

// void *ft_add(void *val)
// {
// 	printf("FUNC %d\n", *(int *)val + 1);
// }

// void ft_delete(void *val)
// {
// 	printf("deleted\n");
// }