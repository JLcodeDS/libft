/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonathanludolph1 <jonathanludolph1@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/25 12:18:55 by jonathanlud       #+#    #+#             */
/*   Updated: 2026/03/25 12:19:40 by jonathanlud      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;
	char	*s1_c;
	char	*s2_c;

	s1_c = (char *)s1;
	s2_c = (char *)s2;
	i = 0;
	while (s1_c[i] == s2_c[i] && i < n)
		i++;
	return (s1_c[i] - s2_c[i]);
}

// int main()
// {
// 	char s1[6] = "hella";
// 	char s2[6] = "hello";
// 	int n = 7;
// 	printf("%d %d\n", ft_memcmp(s1,s2,n), memcmp(s1,s2,n));
// }