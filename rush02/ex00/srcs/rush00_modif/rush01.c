/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmauffr <anmauffr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/07 11:15:09 by moursel           #+#    #+#             */
/*   Updated: 2019/04/24 18:12:55 by anmauffr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/ft.h"

void	rush01(int x, int y, char *str)
{
	int		i;
	int		j;
	int		k;

	i = 0;
	k = 0;
	while (++i <= y && !(x <= 0 || y <= 0))
	{
		j = 0;
		while (++j <= x)
		{
			if ((j == 1 && i == 1) || (j == x && i == y && x != 1 && y != 1))
				str[k] = '/';
			else if ((j == x && i == 1) || (j == 1 && i == y))
				str[k] = '\\';
			else if (i == 1 || i == y || j == 1 || j == x)
				str[k] = '*';
			else
				str[k] = ' ';
			k++;
		}
		str[k++] = '\n';
	}
	str[--k] = '\0';
}
