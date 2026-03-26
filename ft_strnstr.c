/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonathanludolph1 <jonathanludolph1@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/25 12:48:51 by jonathanlud       #+#    #+#             */
/*   Updated: 2026/03/25 12:50:24 by jonathanlud      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strnstr(char *haystack, char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	temp_i;

	i = 0;
	if (!needle[0])
		return (haystack);
	while (haystack[i] && i < len)
	{
		j = 0;
		temp_i = i;
		while (haystack[temp_i] == needle[j] && i + j < len)
		{
			if (needle[j+1] == '\0')
				return (&haystack[i]);
			j++;
			temp_i++;
		}
		i++;
	}
	return (NULL);
}

// int main()
// {
// 	char hay[20] = "hello my brother wys";
// 	char need[3] = "";
// 	int n = 6;
// 	printf("%s\n%s\n", ft_strnstr(hay, need, n), strnstr(hay, need, n));
// }