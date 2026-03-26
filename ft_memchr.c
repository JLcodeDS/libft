/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonathanludolph1 <jonathanludolph1@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/25 11:57:21 by jonathanlud       #+#    #+#             */
/*   Updated: 2026/03/25 12:18:45 by jonathanlud      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	char	*s_char;

	s_char = (char *)s;
	i = 0;
	while (i < n)
	{
		if (s_char[i] == c)
			return (&s_char[i]);
		i++;
	}
	return (NULL);
}

// int main()
// {
// 	printf("%s\n", ft_memchr("helloheyo", 'e', 10));
// }