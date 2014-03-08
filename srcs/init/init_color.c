/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_color.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agreau <agreau@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/08 17:55:56 by agreau            #+#    #+#             */
/*   Updated: 2014/03/08 19:06:39 by agreau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Al_Cu.h"

char		*list_color()
{
	char 	*color[7]={"RED", "BLUE", "CYAN", "GREEN", "YELLOW", "WHITE", NULL};
	return(color);
}

char 		*sel_color()
{
	char 	*color
	int 	i;
	char 	*str;
	char 	*sel;
	int 	error;

	i = -1;
	error = 1;
	color = list_color();
	str = "select your color from the list below : ";
	while(color[i++] != NULL)
		str += ft_multistrjoin(3, "\n", "- ", color[i]);
	ft_putendl(str);
	sel = get_next_line(0);
	i = -1;
	while(color[i++] != NULL || error == 1)
		error = strcmp(color[i], sel);
	if (!errorr)
		return (sel);
	else
		ft_putstr(ft_strjoin("ERROR: color not in list\n", sel_color()));
}

char 	*set_color_IA(char *color_player)
{
	char 	*color
	char 	*color_IA
	int 	valid;

	valid = 1;
	color = list_color();
	while ((rmd < 0 || rmd > (sizeof(color) - 2)) && valid != 0)
	{
		color_IA = color[rand()];
		valid = (ft_strcmp(color_IA, color_player));
	}
	return(color_IA);
}
