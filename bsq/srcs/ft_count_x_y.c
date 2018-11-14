/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_x_y.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmauffr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/23 20:41:03 by anmauffr          #+#    #+#             */
/*   Updated: 2018/07/23 20:43:42 by anmauffr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"

int		ft_count_x(char *argv)
{
	int		i;
	int		fd;
	int		count_x;
	char	*str;

	str = malloc(sizeof(char) * BUF_SIZE);
	if (!(fd = open(argv, O_RDONLY)))
		return (0);
	read(fd, str, BUF_SIZE);
	i = 0;
	while (str[i] != '\n' && str[i] != '\0')
		i++;
	count_x = 0;
	i++;
	while (str[i] != '\n' && str[i] != '\0')
	{
		i++;
		count_x++;
	}
	free(str);
	return (++count_x);
}

int		ft_count_y(char *argv)
{
	int		i;
	int		fd;
	int		count_j;
	char	*str;

	str = malloc(sizeof(char) * BUF_SIZE);
	if (!(fd = open(argv, O_RDONLY)))
		return (0);
	read(fd, str, BUF_SIZE);
	i = 0;
	while (str[i] != '\n' && str[i] != '\0')
		i++;
	i++;
	count_j = 0;
	while (str[i])
	{
		if (str[i] == '\n')
			count_j++;
		i++;
	}
	free(str);
	return (count_j);
}

