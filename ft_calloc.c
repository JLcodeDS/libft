/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonathanludolph1 <jonathanludolph1@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/25 12:01:38 by jonathanlud       #+#    #+#             */
/*   Updated: 2026/03/26 16:48:23 by jonathanlud      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	*ft_memset(void *b, int c, size_t len);

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	ptr = malloc(count * size);
	if (!ptr)
		return (NULL);
	return (ft_memset(ptr, 0, count));
}

static void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	uc;
	unsigned long	i;
	unsigned char	*bu;

	uc = c;
	i = 0;
	bu = (unsigned char *)b;
	while (i < len)
	{
		*bu++ = uc;
		i++;
	}
	return (b);
}

// int main()
// {
// 	char *s = ft_calloc(5, sizeof(char));
// 	for (int i = 0; i < 5; i++)
// 		printf("%d\n", s[i]);
// 	free(s);
// }