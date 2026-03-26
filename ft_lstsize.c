/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonathanludolph1 <jonathanludolph1@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/25 12:17:56 by jonathanlud       #+#    #+#             */
/*   Updated: 2026/03/25 12:18:05 by jonathanlud      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

int	ft_lstsize(t_list *lst)
{
	int		i;
	t_list	*temp;

	if (!lst)
		return (0);
	temp = lst;
	i = 1;
	while (temp -> next != NULL)
	{
		i++;
		temp = temp -> next;
	}
	return (i);
}

// int main()
// {
// 	t_list *node1 = malloc(sizeof(t_list));
// 	t_list *node2 = malloc(sizeof(t_list));
// 	t_list *node3 = malloc(sizeof(t_list));

// 	int i = 1;
// 	node1 -> content = &i;
// 	node2 -> content = &i;
// 	node3 -> content = &i;
// 	node1 -> next = node2;
// 	node2 -> next = node3;
// 	node3 -> next = NULL;

// 	printf("%d\n", ft_lstsize(node1));
// 	free(node1);
// 	free(node2);
// 	free(node3);
// }