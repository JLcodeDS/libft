/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonathanludolph1 <jonathanludolph1@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/25 12:52:39 by jonathanlud       #+#    #+#             */
/*   Updated: 2026/03/25 12:52:50 by jonathanlud      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start,size_t len)
{
	unsigned int	i;
	unsigned int	j;
	char			*s2;

	i = start;
	j = 0;
	while (s[i] && i < start + len)
		i++;
	s2 = malloc((i - start + 1)  * sizeof(char));
	while (start < i)
	{
		s2[j++] = s[start++];
	}
	s2[j] = '\0';
	return (s2);
}

// int main()
// {
// 	char s1[10] = "012345678";
// 	char *s2 = ft_substr(s1, 3, 10);
// 	printf("%s %s\n", s1, s2);
// 	free(s2);
// }