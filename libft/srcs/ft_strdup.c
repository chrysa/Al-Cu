/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agreau <agreau@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 08:48:19 by agreau            #+#    #+#             */
/*   Updated: 2014/03/08 17:51:49 by agreau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char		*ft_strdup(const char *s1)
{
	char	*dup;

	dup = (char *)malloc(sizeof(char) * ft_strlen(s1) + 1);
	if (dup)
	{
		dup = ft_strcpy(dup, s1);
		return (dup);
	};
	return (NULL);
}
