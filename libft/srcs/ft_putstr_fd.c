/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agreau <agreau@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/22 09:21:29 by agreau            #+#    #+#             */
/*   Updated: 2014/03/08 17:51:13 by agreau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void		ft_putstr_fd(char const *s, int fd)
{
	char	*ptr;

	ptr = (char *) s;
	while (*ptr)
		ptr += 1;
	write(fd, s, (ptr - s));
}
