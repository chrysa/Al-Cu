/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agreau <agreau@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/22 11:51:06 by agreau            #+#    #+#             */
/*   Updated: 2014/03/08 17:52:51 by agreau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char		*ft_strnew(size_t size)
{
	char	*str;

	str = (char *) malloc(sizeof(char) * (size + 1));
	if (str)
	{
		ft_bzero(str, (size + 1));
		return (str);
	}
	return (NULL);
}
