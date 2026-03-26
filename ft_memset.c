/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonathanludolph1 <jonathanludolph1@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/25 12:22:08 by jonathanlud       #+#    #+#             */
/*   Updated: 2026/03/25 12:24:03 by jonathanlud      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memset(void *b, int c, size_t len)
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
// 	char b[20];
// 	ft_memset(b, 123, 26);
// 	printf("%s\n", b);
// }