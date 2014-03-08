/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agreau <agreau@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 10:57:22 by agreau            #+#    #+#             */
/*   Updated: 2014/03/08 17:52:24 by agreau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	lensrc;
	size_t	lendst;
	size_t	lendst_o;
	size_t	i;

	lensrc = 0;
	lendst_o = 0;
	lendst = 0;
	i = 0;
	while (src[lensrc])
		lensrc++;
	while (dst[lendst])
	{
		lendst++;
		lendst_o++;
	}
	while (src[i] && lendst + 1 < size)
		dst[lendst++] = src[i++];
	dst[lendst] = 0;
	if (size < lendst_o)
		return (size + lensrc);
	return (lendst_o + lensrc);
}
