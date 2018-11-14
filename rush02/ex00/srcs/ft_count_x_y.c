/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_x_y.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmauffr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/21 20:14:56 by anmauffr          #+#    #+#             */
/*   Updated: 2018/07/22 14:18:09 by anmauffr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft.h"

int		ft_count_x_y(int k, int ret, char *buf, int *tab)
{
	int		j_memo;

	j_memo = 0;
	while (k < ret)
	{
		tab[0] = 0;
		while (buf[k] != '\n' && buf[k] != '\0')
		{
			tab[0]++;
			k++;
		}
		k++;
		if (j_memo == 0)
			j_memo = tab[0];
		else if (j_memo != tab[0])
			return (0);
		tab[1]++;
	}
	return (1);
}
