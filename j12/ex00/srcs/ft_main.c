/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmauffr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/17 13:55:53 by anmauffr          #+#    #+#             */
/*   Updated: 2018/07/19 10:42:38 by anmauffr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_header.h"

int		ft_condition(int argc)
{
	if (argc == 1)
	{
		ft_putstr("File name missing.\n", 2);
		return (0);
	}
	else if (argc > 2)
	{
		ft_putstr("Too many arguments.\n", 2);
		return (0);
	}
	else
		return (1);
}

int		main(int argc, char *argv[])
{
	int		fd;
	int		ret;
	char	buf[BUF_SIZE + 1];

	if (ft_condition(argc) == 0)
		return (0);
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		ft_putstr("open() failed\n", 2);
		return (0);
	}
	ret = read(fd, buf, BUF_SIZE);
	buf[ret] = '\0';
	ft_putstr(buf, 1);
	if (close(fd) == -1)
	{
		ft_putstr("close() failed\n", 2);
		return (0);
	}
	return (1);
}
