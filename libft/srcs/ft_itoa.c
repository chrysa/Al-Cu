/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agreau <agreau@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/10 10:53:09 by agreau            #+#    #+#             */
/*   Updated: 2014/03/08 17:49:19 by agreau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

static int	len_str(int n)
{
	int		i;

	i = 1;
	while (n / 10 != 0)
	{
		n = n / 10;
		i ++;
	}
	return (i);
}

static int	is_neg(int n)
{
	if (n < 0)
		return (1);
	return (0);
}

char		*ft_itoa(int n)
{
	char	*str;
	size_t	i;
	size_t	neg;

	neg = is_neg(n);
	i = len_str(n);
	str = ft_strnew(neg + i + 1);
	if (n == -2147483648)
		return (ft_strcpy(str, "-2147483648"));
	if (is_neg(n))
		n = n * -1;
	if (str)
	{
		if (!n)
			str[0] = '0';
		while (n)
		{
			str[--i + neg] = (n % 10) + '0';
			n = n / 10;
		}
		if (neg)
			str[0] = '-';
	}
	return (str);
}
