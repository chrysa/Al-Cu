/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   struct.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agreau <agreau@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/08 18:04:05 by agreau            #+#    #+#             */
/*   Updated: 2014/03/08 18:25:47 by agreau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRUCT_H
# define STRUCT_H

struct					s_game
{
	char				*color_player;
	char				*color_IA;
	char				**grid;
	int					col;
	int					line;
	int					lap_number;
}						t_game;

#endif /* !STRUCT_H */
