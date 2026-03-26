/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonathanludolph1 <jonathanludolph1@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/25 12:26:04 by jonathanlud       #+#    #+#             */
/*   Updated: 2026/03/26 16:45:40 by jonathanlud      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	count_words(char const *s, char c);
int	calculate_strsize(int i, const char *s, char c);

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	int		k;
	char	**s_split;

	i = 0;
	j = 0;
	s_split = malloc((count_words(s, c) + 1) * sizeof(char *));
	if (!s_split)
		return (NULL);
	while (s[i] == c)
		i++;
	while (s[i])
	{
		s_split[j] = malloc(calculate_strsize(i, s, c));
		k = 0;
		while (s[i] != c && s[i])
			s_split[j][k++] = s[i++];
		s_split[j][k] = '\0';
		while (s[i] == c && s[i])
			i++;
		j++;
	}
	s_split[j] = (NULL);
	return (s_split);
}

static int	calculate_strsize(int i, const char *s, char c)
{
	int	i_temp;

	i_temp = i;
	while (s[i_temp] != c && s[i_temp])
		i_temp++;
	return ((i_temp - i + 2) * sizeof(char));
}

static int	count_words(char const *s, char c)
{
	int	i;
	int	words;

	i = 0;
	words = 0;
	while (s[i] == c)
		i++;
	while (s[i])
	{
		words += 1;
		while (s[i] != c && s[i])
			i++;
		while (s[i] == c && s[i])
			i++;
	}
	return (words);
}

// int	main(int ac, char **av)
// {
// 	if (ac < 2)
// 		return 0;
// 	int i = 0;
// 	char **s = ft_split(av[1], av[2][0]);
// 	while (s[i] != NULL)
// 		printf("%s\n", s[i++]);
// }