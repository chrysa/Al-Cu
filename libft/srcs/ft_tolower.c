/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agreau <agreau@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/19 14:34:42 by agreau            #+#    #+#             */
/*   Updated: 2014/03/08 17:53:16 by agreau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_tolower(int c)
{
	if ((char)c >= 'A' && (char)c <= 'Z')
	{
		c = ((char)c - 'A' + 'a');
	}
	return (c);
}
