/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agreau <agreau@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/25 10:49:07 by agreau            #+#    #+#             */
/*   Updated: 2014/03/08 17:52:31 by agreau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char		*ft_strmap(char const *s, char (*f)(char))
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
			r[j] = (*f)(s[j]);
			j++;
		}
		r[j] = 0;
	}
	return (r);
}
