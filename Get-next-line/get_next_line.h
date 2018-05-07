/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagirard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/13 17:42:26 by lagirard          #+#    #+#             */
/*   Updated: 2017/05/25 17:45:12 by lagirard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H

# define GET_NEXT_LINE_H

# include "get_next_line.h"
# include "./libft/includes/libft.h"
# include <fcntl.h>
# include <stdlib.h>
# include <unistd.h>

# define BUFF_SIZE 999

typedef struct	s_struct
{
	char		*tmp;
}				t_struct;

int				get_next_line(const int fd, char **line);

#endif
