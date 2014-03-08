/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agreau <agreau@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 16:51:36 by agreau            #+#    #+#             */
/*   Updated: 2014/03/08 17:51:21 by agreau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char		*ft_strcat(char *s1, const char *s2)
{
	size_t	lens1;
	size_t	lens2;

	lens1 = 0;
	lens2 = 0;
	while (s1[lens1])
		lens1++;
	while (s2[lens2])
		s1[lens1++] = s2[lens2++];
	s1[lens1] = '\0';
	return (s1);
}
