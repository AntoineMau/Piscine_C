/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmauffr <anmauffr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/07 13:09:17 by moursel           #+#    #+#             */
/*   Updated: 2019/04/24 18:13:10 by anmauffr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/ft.h"

void	rush(int x, int y)
{
	int j;
	int i;

	i = 1;
	while (i <= y && !(x <= 0 || y <= 0))
	{
		j = 1;
		while (j <= x)
		{
			if ((j == 1 && i == 1) || (j == 1 && i == y))
				ft_putchar(65);
			else if ((j == x && i == y) || (j == x && i == 1))
				ft_putchar(67);
			else if ((j == 1) || (j == x) || (i == 1) || (i == y))
				ft_putchar(66);
			else
				ft_putchar(' ');
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}
