/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agreau <agreau@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/25 09:32:54 by agreau            #+#    #+#             */
/*   Updated: 2014/03/08 17:52:00 by agreau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void		ft_striter(char *s, void (*f)(char *))
{
	size_t	i;

	i = 0;
	while (s[i])
		(*f)(&s[i++]);
}