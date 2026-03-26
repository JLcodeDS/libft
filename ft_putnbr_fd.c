/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonathanludolph1 <jonathanludolph1@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/25 12:24:30 by jonathanlud       #+#    #+#             */
/*   Updated: 2026/03/25 12:25:23 by jonathanlud      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

// int	count_len(int n);
// char *ft_itoa(int n);

void	ft_putnbr_fd(int n, int fd)
{
	char	*s;

	s = ft_itoa(n);
	write(ft_strlen(s), s, fd);
	free(s);
}

// char *ft_itoa(int n)
// {
// 	long n_long;
// 	long denum;
// 	int i;

// 	char *s = malloc((count_len(n) + 1) * sizeof(char));
// 	if (!s)
// 		return (NULL);
// 	n_long = n;
// 	i = 1;
// 	denum = 1;
// 	while (i < count_len(n))
// 	{
// 		denum *= 10;
// 		i++;
// 	}
// 	i = 0;
// 	if (n_long < 0)
// 	{
// 		s[i++] = '-';
// 		n_long *= -1;
// 	}
// 	while (denum > 0)
// 	{
// 		s[i] = n_long / denum + '0';
// 		n_long -= (n_long / denum) * denum;
// 		denum /= 10;
// 		i++;
// 	} 
// 	s[i] = '\0';
// 	return (s);
// }

// int count_len(int n)
// {
// 	int i;
// 	long denum;

// 	i = 0;
// 	denum = 1;
// 	while (n / denum != 0)
// 	{
// 		i++;
// 		denum *= 10;
// 	}
// 	return (i);
// }