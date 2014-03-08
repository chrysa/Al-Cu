/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agreau <agreau@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/19 15:23:30 by agreau            #+#    #+#             */
/*   Updated: 2014/03/08 17:49:57 by agreau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void		*ft_memset(void *b, int c, size_t len)
{
	size_t	i;

	i = 0;
	if (b != NULL)
	{
		while (i < len)
		{
			*((char*)b + i) = c;
			i += 1;
		}
		return (b);
	}
	return (NULL);
}
