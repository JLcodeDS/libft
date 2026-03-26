/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonathanludolph1 <jonathanludolph1@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/25 12:05:49 by jonathanlud       #+#    #+#             */
/*   Updated: 2026/03/26 16:46:58 by jonathanlud      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <limits.h>

int	count_len(int n);
int	find_denum(int n);

char	*ft_itoa(int n)
{
	long	n_long;
	long	denum;
	int		i;
	char	*s;

	s = malloc((count_len(n) + 1) * sizeof(char));
	if (!s)
		return (NULL);
	n_long = n;
	denum = find_denum(n);
	i = 0;
	if (n_long < 0)
	{
		s[i++] = '-';
		n_long *= -1;
	}
	while (denum > 0)
	{
		s[i] = n_long / denum + '0';
		n_long -= (n_long / denum) * denum;
		denum /= 10;
		i++;
	}
	s[i] = '\0';
	return (s);
}

static int	count_len(int n)
{
	int		i;
	long	denum;

	i = 0;
	denum = 1;
	while (n / denum != 0)
	{
		i++;
		denum *= 10;
	}
	return (i);
}

static int	find_denum(int n)
{
	int	denum;
	int	i;

	denum = 1;
	i = 1;
	while (i < count_len(n))
	{
		denum *= 10;
		i++;
	}
	return (denum);
}

// int main()
// {
// 	char *s = ft_itoa(INT_MAX);
// 	printf("%s\n%d\n", s, INT_MAX);
// 	free(s);
// }