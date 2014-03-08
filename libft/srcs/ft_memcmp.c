/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agreau <agreau@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 15:42:24 by agreau            #+#    #+#             */
/*   Updated: 2014/03/08 17:49:43 by agreau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int			ft_memcmp(const void *s1, const void *s2, size_t n)
{
	while (n-- > 0)
	{
		if (*((unsigned char *) s1) != *((unsigned char *) s2))
			return (*((unsigned char *) s1) - *((unsigned char *) s2));
		s1++;
		s2++;
	}
	return (0);
}
