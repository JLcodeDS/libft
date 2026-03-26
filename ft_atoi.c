/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonathanludolph1 <jonathanludolph1@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/25 11:59:00 by jonathanlud       #+#    #+#             */
/*   Updated: 2026/03/25 12:00:10 by jonathanlud      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

// int ft_isdigit(int c);

int	ft_atoi(char *str)
{
	int	i;
	int	num;
	int	return_val;

	i = 0;
	num = 1;
	return_val = 0;
	while (str[i] == ' ')
		i++;
	if (str[i] == '-')
	{
		num = -1;
		i++;
	}
	while (ft_isdigit(str[i]))
	{
		return_val = return_val * 10 + str[i] - '0';
		i++;
	}
	return (return_val * num);
}

// int ft_isdigit(int c)
// {
// 	return (c >= '0' && c <= '9');
// }

// int main(int ac, char **av)
// {
// 	if (ac > 1)
// 		printf("%d\n%d\n", ft_atoi(av[1]), atoi(av[1]));
// }