/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   include.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agreau <agreau@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/08 18:03:24 by agreau            #+#    #+#             */
/*   Updated: 2014/03/08 18:55:07 by agreau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INCLUDE_H
# define INCLUDE_H

#include <stdlib.h>
#include <time.h>

/*
**gride/print.c
*/
void	print_grid(t_game game);

/*
**init/gride.c
*/
void	init_grid(int col, int line);

#endif /* !INCLUDE_H */
