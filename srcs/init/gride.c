/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gride.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agreau <agreau@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/08 15:36:57 by agreau            #+#    #+#             */
/*   Updated: 2014/03/08 18:39:52 by agreau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Al_Cu.h"

char *init_grid(int col, int line)
{
	char **grid;
	char *tmp_line;
	int i;

	grid = (char **)malloc(sizeof(char **) * col);
	line = (char *)malloc(sizeof(char *) * line);
	i = 0;
	while(i < line)
	{
		grid[i]= &line[i * col];
		i++;
	}
	return(grid);
}
