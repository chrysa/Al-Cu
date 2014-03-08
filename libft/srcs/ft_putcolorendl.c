/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putcolorendl.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agreau <agreau@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/08 19:43:55 by agreau            #+#    #+#             */
/*   Updated: 2014/03/08 17:45:42 by agreau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_putcolorendl(const char *str, char *color)
{
	return (ft_strjoin(ft_putcolor(str, color), "\n"));
}
