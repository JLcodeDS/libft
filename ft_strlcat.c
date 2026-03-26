/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonathanludolph1 <jonathanludolph1@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/25 12:45:44 by jonathanlud       #+#    #+#             */
/*   Updated: 2026/03/25 12:46:25 by jonathanlud      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	s;
	size_t	d;
	size_t	i;

	d = ft_strlen(dst);
	s = d + ft_strlen(src);
	if (dstsize <= 0)
		return (s);
	i = 0;
	while (d + i < dstsize - 1)
	{
		dst[d + i] = src[i];
		i++;
	}
	dst[d + i] = '\0';
	return (s);
}

// size_t ft_strlen(const char *s)
// {
// 	size_t i;

// 	i = 0;
// 	while (s[i])
// 		i++;
// 	return i;
// }

// int main()
// {
// 	char src[6] = "hello";
// 	char dst[10] = "hel";
// 	size_t i = ft_strlcat(dst, src, 10);
// 	printf("%ld: %s\n", i, dst);
// }