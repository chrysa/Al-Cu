/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agreau <agreau@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 17:12:10 by agreau            #+#    #+#             */
/*   Updated: 2014/03/08 17:51:39 by agreau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int			ft_strcmp(const char *s1, const char *s2)
{
	size_t	i;

	i = 0;
	if (s1 && s2)
	{
		while (s1[i] != '\0' || s2[i] != '\0')
		{
			if ((unsigned int)s1[i] != (unsigned int)s2[i])
				return ((unsigned int)s1[i] - (unsigned int)s2[i]);
			i++;
		}
		if (s1[i] == '\0')
			return ((unsigned int)s1[i] - (unsigned int)s2[i]);
	}
	return (0);
}
