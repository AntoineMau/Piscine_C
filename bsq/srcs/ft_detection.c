/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_detection.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmauffr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/23 17:09:22 by anmauffr          #+#    #+#             */
/*   Updated: 2018/07/23 23:22:12 by anmauffr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"

int		ft_is_square(int i, int j, char **buf, int size_square)
{
	int		add_i;
	int		add_j;

	add_i = 0;
	while (add_i < size_square)
	{
		add_j = 0;
		while (add_j < size_square)
		{
			if (buf[i + add_i][j + add_j] == 'o')
				return (0);
			add_j++;
		}
		add_i++;
	}
	return (1);
}

int		ft_detection(int x, int y, char **buf, int size_square)
{
	int		i;
	int		j;

	i = 0;
	while (i <= x - size_square)
	{
		j = 0;
		while (j <= y - size_square)
		{
			if (ft_is_square(i, j, buf, size_square) == 1)
				return (1 + ft_detection(x, y, buf, size_square + 1));
			j++;
		}
		i++;
	}
	return (0);
}
