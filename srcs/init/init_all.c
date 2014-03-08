/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_all.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agreau <agreau@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/08 18:27:09 by agreau            #+#    #+#             */
/*   Updated: 2014/03/08 18:55:39 by agreau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Al_Cu.h"

void	init_all(t_game *game, int col, int line)
{
	srand (time (NULL));
	game->color_player = sel_color();
	game->color_IA = set_color_IA(game->color_player);
	game->grid = init_grid(col, line);
	game->line = line;
	game->col = col;
	game->lap_number = 0;
}
