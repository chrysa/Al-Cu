/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lib_struct.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agreau <agreau@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/24 17:09:05 by agreau            #+#    #+#             */
/*   Updated: 2014/03/08 17:48:26 by agreau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIB_STRUCT_H
# define LIB_STRUCT_H

# include <string.h>

typedef struct		s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}					t_list;

#endif /* !LIB_STRUCT_H */
