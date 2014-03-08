/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agreau <agreau@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/25 16:00:19 by agreau            #+#    #+#             */
/*   Updated: 2014/03/08 17:53:10 by agreau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char		*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;

	i = 0;
	str = (char *) malloc(sizeof(char) * (len + 1));
	if (str)
	{
		while (i < len)
			str[i++] = s[start++];
		str[i] = 0;
		return (str);
	}
	return (NULL);
}
