/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agreau <agreau@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 16:42:39 by agreau            #+#    #+#             */
/*   Updated: 2014/03/08 17:52:55 by agreau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char		*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (s2[j])
	{
		if (!s1[i] || i == n)
			return (NULL);
		if (s1[i] == s2[j])
			j++;
		else
		{
			j = 0;
			while (s1[i] == s2[j])
				j++;
		}
		i++;
	}
	return ((char *)(s1 + i - j));
}
