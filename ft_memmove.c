/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonathanludolph1 <jonathanludolph1@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/25 12:20:58 by jonathanlud       #+#    #+#             */
/*   Updated: 2026/03/25 12:21:58 by jonathanlud      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memcpy(void *dst, const void *src, size_t len)
{
	char	*udst;
	char	*usrc;
	size_t	i;

	udst = (char *)dst;
	usrc = (char *)src;
	if (dst > src)
	{
		i = len;
		while (i-- > 0)
			udst[i] = usrc[i];
	}
	else
	{
		i = 0;
		while (i++ < len)
			udst[i] = usrc[i];
	}
	return (dst);
}

// int main()
// {
// 	char dst[8];
// 	char src[6] = "hello";
// 	printf("%s\n", ft_memcpy(dst, src, 6));
// }