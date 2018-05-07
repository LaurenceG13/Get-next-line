/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagirard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/29 21:48:31 by lagirard          #+#    #+#             */
/*   Updated: 2017/04/02 19:32:03 by lagirard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include "./libft/includes/libft.h"
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>

int		main(int argc, char **argv)
{
	int		fd;
	char	*line;
	int		i;

	i = 1;
	if (argc != 2)
	{
		ft_putendl("usage : ./get_next_line file");
		return (0);
	}
	fd = open(argv[1], O_RDONLY);
	if (fd < 0)
	{
		ft_putstr("fd < 0 --> error\n");
		return (0);
	}
	while ((get_next_line((int const)fd, &line)) > 0)
	{
		ft_putstr("Line number ");
		ft_putnbr(i++);
		ft_putstr(" : ");
		ft_putendl(line);
		free(line);
	}
	return (1);
}
