/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmauffr <anmauffr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/07 12:35:41 by cbeasse           #+#    #+#             */
/*   Updated: 2019/04/24 18:13:07 by anmauffr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/ft.h"

void	ft_print(int i, int j, int x, int y)
{
	if ((j == 1 && i == 1) || (j == x && i == 1))
		ft_putchar('A');
	else if ((j == x && i == y && x != 1 && y != 1) || (j == 1 && i == y))
		ft_putchar('C');
	else if (i == 1 || i == y || j == 1 || j == x)
		ft_putchar('B');
	else
		ft_putchar(' ');
}

void	rush(int x, int y)
{
	int		i;
	int		j;

	i = 1;
	while (i <= y && !(x <= 0 || y <= 0))
	{
		j = 1;
		while (j <= x)
		{
			ft_print(i, j, x, y);
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}
