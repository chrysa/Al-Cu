/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agreau <agreau@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 08:19:41 by agreau            #+#    #+#             */
/*   Updated: 2014/03/08 17:46:23 by agreau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int			ft_putstr(char const *s)
{
	char	*ptr;

	if (s)
	{
		ptr = (char *) s;
		while (*ptr)
			ptr += 1;
		write(1, s, (ptr - s));
		return (ptr - s);
	}
	return (0);
}
