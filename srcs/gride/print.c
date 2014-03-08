/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agreau <agreau@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/08 17:31:52 by agreau            #+#    #+#             */
/*   Updated: 2014/03/08 19:16:42 by agreau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Al_Cu.h"

void	print_grid(t_game *game)
{
	int i;
	int j;
	char *cell;

	i = 0;
	while (i <= game->line)
	{
		ft_putendl(ft_multistrjoin(3, "line ", ("A" + i), " :"));
		ft_putend("===============");
		j = 0;
		while(j <= game->col)
		{
			cell = (game_gride[i][j] != NULL) ? game_gride[i][j]  : "\n";
			ft_pustr(cell);
			j++;
		}
		ft_putend("===============");
		i++;
	}
}
