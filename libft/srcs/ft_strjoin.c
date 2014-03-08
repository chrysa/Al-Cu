/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agreau <agreau@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/25 16:28:19 by agreau            #+#    #+#             */
/*   Updated: 2014/03/08 17:52:21 by agreau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

static size_t	st_strlen(char const *s)
{
	size_t		i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char			*ft_strjoin(char const *s1, char const *s2)
{
	char		*str;
	size_t		i;
	size_t		j;
	size_t		tot;

	i = st_strlen(s1);
	j = st_strlen(s2);
	tot = 0;
	str = (char *) malloc(sizeof(char) * (i + j + 1));
	if (str && (s1 && s2))
	{
		while (tot < i)
		{
			str[tot] = s1[tot];
			tot++;
		}
		while (tot < i + j)
		{
			str[tot] = s2[tot - i];
			tot++;
		}
		str[tot] = 0;
		return (str);
	}
	return (NULL);
}
