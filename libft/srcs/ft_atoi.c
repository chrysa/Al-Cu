/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agreau <agreau@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 18:15:56 by agreau            #+#    #+#             */
/*   Updated: 2014/03/08 17:48:44 by agreau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	ft_search_white(char c)
{
	return (c == ' ' || c == '\t' || c == '\n' || c == '\r' || c == '\f'
		|| c == '\v');
}

int			ft_atoi(const char *str)
{
	int		i;
	int		n;
	int		mul;

	i = 0;
	n = 0;
	mul = -1;
	while (ft_search_white(str[i]))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			mul = -mul;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		n = n * 10 - (str[i++] - '0');
	}
	return (n * mul);
}
