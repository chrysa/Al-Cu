/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agreau <agreau@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 12:44:14 by agreau            #+#    #+#             */
/*   Updated: 2014/03/08 17:49:54 by agreau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void		*ft_memmove(void *s1, const void *s2, size_t n)
{
	void	*s3;
	void	*ret;

	if (!s1 || !s2)
		return (s1);
	s3 = ft_strdup((char *)s2);
	ret = ft_memcpy(s1, s3, n);
	free(s3);
	return (ret);
}
