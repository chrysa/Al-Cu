/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_multistrjoin.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agreau <agreau@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: Error parsing the header. :( Contact apilate!#+#    #+#             */
/*   Updated: 2014/03/08 17:50:05 by agreau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

lude "../includes/libft.h"
#include <stdarg.h>

char    *ft_multistrjoin(int nb, ...)
{
	va_list             ap;
	char                *str;
	char                *ptr;
	char                *tmp;

	va_start(ap, nb);
	ptr = ft_strnew(1);
	if (ptr == NULL || nb < 0)
		return (NULL);
	while (nb > 0)
	{
		str = ft_strdup(va_arg(ap, char *));
		tmp = ptr;
		ptr = ft_strjoin(tmp, str);
		free(str);
		free(tmp);
		nb--;
	}
	va_end(ap);
	return (ptr);
}
