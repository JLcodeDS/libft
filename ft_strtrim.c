/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonathanludolph1 <jonathanludolph1@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/25 12:51:11 by jonathanlud       #+#    #+#             */
/*   Updated: 2026/03/26 16:44:16 by jonathanlud      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

int	isin_set(char c, char const *set);

// NEEDS TO BE ONLY THE END AND START

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	int		k;
	char	*s_trim;

	i = 0;
	j = ft_strlen(s1) - 1;
	while (s1[i] && isin_set(s1[i], set))
		i++;
	while (i < j && isin_set(s1[j], set))
		j--;
	s_trim = malloc((j - i + 2) * sizeof(char));
	if (!s_trim)
		return (NULL);
	k = 0;
	while (i <= j)
		s_trim[k++] = s1[i++];
	s_trim[k] = '\0';
	return (s_trim);
}

static int	isin_set(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i++])
			return (1);
	}
	return (0);
}

// int ft_strlen(const char *s)
// {
// 	int i;

// 	i = 0;
// 	while (s[i])
// 		i++;
// 	return i;
// }

// int main(int ac, char **av)
// {
// 	if (ac > 1)
// 	{
// 		char *s = ft_strtrim(av[1], av[2]);
// 		printf("%s\n", s);
// 		free(s);
// 	}
// }