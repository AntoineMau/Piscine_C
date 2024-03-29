/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmauffr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/07 15:04:33 by anmauffr          #+#    #+#             */
/*   Updated: 2018/07/21 10:27:04 by anmauffr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/ft.h"

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
			if ((j == 1 && i == 1) || (j == x && i == y && x != 1 && y != 1))
				ft_putchar('A');
			else if ((j == x && i == 1) || (j == 1 && i == y))
				ft_putchar('C');
			else if (i == 1 || i == y || j == 1 || j == x)
				ft_putchar('B');
			else
				ft_putchar(' ');
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}
