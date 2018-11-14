/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmauffr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/17 13:55:53 by anmauffr          #+#    #+#             */
/*   Updated: 2018/07/26 21:58:21 by anmauffr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_header.h"

int		ft_errno(int nb_error, char *argv)
{
	if (nb_error == 2 || nb_error == 13 || nb_error == 21)
	{
		ft_putstr("cat: ", 2);
		ft_putstr(argv, 2);
		if (nb_error == 2)
			ft_putstr(": No such file or directory\n", 2);
		else if (nb_error == 13)
			ft_putstr(": Permission denied\n", 2);
		else
			ft_putstr(": Is a directory\n", 2);
		return (0);
	}
	return (1);
}

int		main(int argc, char *argv[])
{
	int		i;
	int		fd;
	int		ret;
	char	buf[BUF_SIZE + 1];

	i = 1;
	while (i < argc)
	{
		errno = 0;
		if ((fd = open(argv[i], O_RDONLY)) == -1)
			ft_errno(errno, argv[i]);
		if ((ret = read(fd, buf, BUF_SIZE)) == -1)
			ft_errno(errno, argv[i]);
		else
		{
			buf[ret] = '\0';
			ft_putstr(buf, 1);
		}
		i++;
	}
	if (close(fd) == -1)
		return (0);
	return (1);
}
