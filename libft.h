/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonathanludolph1 <jonathanludolph1@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/25 12:53:35 by jonathanlud       #+#    #+#             */
/*   Updated: 2026/03/25 12:54:26 by jonathanlud      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

int	ft_strlen(const char *s);

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

#endif