/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_oitoa.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agreau <agreau@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/10 10:53:09 by agreau            #+#    #+#             */
/*   Updated: 2014/03/08 17:50:23 by agreau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

static int	len_str(unsigned int n)
{
	int		i;

	i = 1;
	while (n / 8 != 0)
	{
		n = n / 8;
		i ++;
	}
	return (i);
}

char		*ft_oitoa(unsigned int n)
{
	char	*str;
	size_t	i;

	i = len_str(n);
	str = ft_strnew(i);
	if (str)
	{
		if (!n)
			str[0] = '0';
		while (n)
		{
			str[--i] = (n % 8) + '0';
			n = n / 8;
		}
	}
	return (str);
}
