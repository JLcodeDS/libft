/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonathanludolph1 <jonathanludolph1@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/25 12:17:05 by jonathanlud       #+#    #+#             */
/*   Updated: 2026/03/25 12:17:51 by jonathanlud      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new_node;

	new_node = malloc(sizeof(t_list));
	if (!new_node)
		return (NULL);
	new_node -> content = content;
	new_node -> next = NULL;
	return (new_node);
}

// int	main()
// {
// 	int i = 50;
// 	char s[7] = "whatup";
// 	t_list *new_node = ft_lstnew(&i);
// 	t_list *new_node2 = ft_lstnew(s);
// 	printf("%d %s\n", *(int *)(new_node -> content), (char *)(new_node2 -> content));
// 	free(new_node);
// 	free(new_node2);
// }