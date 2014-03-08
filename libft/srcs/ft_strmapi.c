/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agreau <agreau@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/25 11:05:19 by agreau            #+#    #+#             */
/*   Updated: 2014/03/08 17:52:34 by agreau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char		*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	size_t	j;
	char	*r;

	i = 0;
	j = 0;
	while (s[i])
		i++;
	r = ft_strnew(i);
	if (r && f)
	{
		while (j < i)
		{
			r[j] = (*f)(j, s[j]);
			j++;
		}
	}
	return (r);
}
