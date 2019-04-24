/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmauffr <anmauffr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/23 15:18:14 by judumay           #+#    #+#             */
/*   Updated: 2019/04/24 18:12:18 by anmauffr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"

#include <stdio.h>

char	**ft_recup(int argc, char **argv)
{
	char	**buf;
	int		ret;
	int		fd;
	int		j;
	
	(void)argc;
	buf = (char**)malloc(sizeof(char*) * (BUF_SIZE + 1));
	j = 0;
	while (1)
	{
		buf[j] = (char*)malloc(sizeof(char) * (BUF_SIZE + 1));
		fd = open(argv[j + 1], O_RDONLY);
		if (fd == - 1)
			return 0;
		while ((ret = read(fd, buf[j], BUF_SIZE)) > 0)
		{
			buf[j][ret - 1] = '\0';
			ft_putstr(buf[j]);
			j++;
		}
	}
	return (buf);
}

int		main(int argc, char **argv)
{
	ft_recup(argc, argv);
	return (0);
}
