/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agreau <agreau@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/08 15:18:58 by agreau            #+#    #+#             */
/*   Updated: 2014/03/08 18:55:31 by agreau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Al_Cu.h"

int main(int argc, char **argv)
{
	int col;
	int line;
	t_game *game;

	if (argc == 3)
	{
		col = (argv[3] < 7) ? 0 : argv[3];
		line = (argv[2] < 6) ? 0 : argv[2];
		if (col == 0 || line == 0)
		{
			if (col == 0)
				ft_putendl("Usage: row's number must be greater to 6");
			if (line == 0)
				ft_putendl("Usage: line's number must be greater to 5");
		}
		else
		{
			init_all(game, col, line);
			launch_game(game->grid);
			//end_game
		}
	}
	else
		ft_putendl("Usage: Invalid argument number");
	return (0);
}
