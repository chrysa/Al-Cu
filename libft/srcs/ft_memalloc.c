/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agreau <agreau@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 11:07:48 by agreau            #+#    #+#             */
/*   Updated: 2014/03/08 17:49:22 by agreau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void		*ft_memalloc(size_t size)
{
	void	*ptr;

	ptr = (char *)malloc(sizeof(char) * size);
	if (!ptr)
		return (NULL);
	else
		ft_bzero(ptr, size);
	return (ptr);
}
