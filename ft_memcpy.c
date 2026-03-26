/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonathanludolph1 <jonathanludolph1@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/25 12:19:48 by jonathanlud       #+#    #+#             */
/*   Updated: 2026/03/25 12:20:51 by jonathanlud      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*udst;
	char	*usrc;
	size_t	i;

	i = 0;
	udst = (char *)dst;
	usrc = (char *)src;
	while (i < n)
	{
		udst[i] = usrc[i];
		i++;
	}
	return (dst);
}

// int main()
// {
// 	char dst[2];
// 	char src[6] = "hello";
// 	printf("%s\n", ft_memcpy(dst, src, 3));
// }