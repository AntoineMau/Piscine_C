/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmauffr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/17 13:55:53 by anmauffr          #+#    #+#             */
/*   Updated: 2018/07/26 21:49:36 by anmauffr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_header.h"

void	ft_print_less(char *buf, char *argv)
{
	int		i;
	int		nb;
	int		long_buf;

	if ((nb = ft_atoi(argv)) > 0)
		nb = -nb;
	long_buf = 0;
	while (long_buf < ft_strlen(buf) + nb - 1)
		long_buf++;
	i = 0;
	while (buf[long_buf])
		buf[i++] = buf[long_buf++];
	while (buf[i])
		buf[i++] = '\0';
}

void	ft_print_plus(char *buf, char *argv)
{
	int		i;
	int		nb;

	nb = ft_atoi(argv);
	i = 0;
	nb--;
	while (buf[nb])
		buf[i++] = buf[nb++];
	while (buf[i])
		buf[i++] = '\0';
}

int		ft_op_cond(char *argv)
{
	int		i;

	i = 0;
	if (argv[i] == '-' || argv[i] == '+')
		i++;
	while (argv[i] >= '0' && argv[i] <= '9' && argv[i] != '\0')
		i++;
	if (argv[i])
	{
		ft_putstr("tail: illegal offset -- ", 2);
		ft_putstr(argv, 2);
		ft_putchar('\n', 2);
		return (0);
	}
	return (1);
}

int		main2(int argc, char **argv, int i, char *buf)
{
	int		fd;
	int		ret;

	while (++i < argc)
	{
		errno = 0;
		if ((fd = open(argv[i], O_RDONLY)) == -1)
			ft_errno(errno, argv[i]);
		if ((ret = read(fd, buf, BUF_SIZE)) == -1 && errno != 21)
			ft_errno(errno, argv[i]);
		else
		{
			buf[ret] = '\0';
			if (argv[2][0] == '+')
				ft_print_plus(buf, argv[2]);
			else
				ft_print_less(buf, argv[2]);
			ft_print_head(argc, argv[i], i, errno);
			if (errno != 21)
				ft_putstr(buf, 1);
		}
	}
	close(fd);
	return (0);
}

int		main(int argc, char **argv)
{
	char	buf[BUF_SIZE + 1];

	if (ft_op_cond(argv[2]) == 0)
		return (0);
	main2(argc, argv, 2, buf);
	return (0);
}
