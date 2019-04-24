/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmauffr <anmauffr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/23 15:18:14 by judumay           #+#    #+#             */
/*   Updated: 2019/04/24 18:13:46 by anmauffr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"

int get_size_x(char *argv)
{
	int		fd;
	int		ret;
	int		i;
	char	buf[BUF_SIZE + 1];

	i = 0;
	fd = open(argv, O_RDONLY);
	while ((ret = read(fd, buf, 1)))
	{
		i++;
		if (buf[ret - 1] == '\n')
			break ;
		buf[ret] = '\0';
	}
	close(fd);
	return (i);
}

char	**ft_recup(char *argv, int size, int nb_char)
{
	char	**buf;
	char	*temp;
	int		ret;
	int		fd;
	int		j;

	buf = (char**)malloc(sizeof(*buf) * (BUF_SIZE + 1));
	temp = (char*)malloc(sizeof(temp) * (size));
	fd = open(argv, O_RDONLY);
	if (fd == - 1)
		return 0;
	read(fd, temp, size);
	free(temp);
	j = 0;
	buf[j] = (char*)malloc(sizeof(**buf) * (nb_char + 1));
	while ((ret = read(fd, buf[j], 11)) > 0)
	{
		buf[j][ret] = '\0';
		j++;
		buf[j] = (char*)malloc(sizeof(**buf) * (nb_char + 1));
	}
	close(fd);
	return (buf);
}

#include <stdio.h>

int		main(int argc, char **argv)
{
	int		i;
	int		j;
	int		nb_char;
	int		size_beg;
	char	**tab;

	if (argc < 2)
		return (0);
	i = 0;
	while (++i < argc)
	{
		nb_char = ft_count_x(argv[i]);
		size_beg = get_size_x(argv[i]);
		tab = ft_recup(argv[i], size_beg, nb_char);
		printf("carre max: %d\n", ft_detection(11, 11, tab, 1) + 1);
		j = 0;
		while (tab[j])
			ft_putstr(tab[j++]);
		if (i < argc - 1)
			ft_putchar('\n');
	}
	return (0);
}
