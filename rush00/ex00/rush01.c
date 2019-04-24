/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmauffr <anmauffr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/07 11:15:09 by moursel           #+#    #+#             */
/*   Updated: 2019/04/24 18:14:50 by anmauffr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

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
				ft_putchar('/');
			else if ((j == x && i == 1) || (j == 1 && i == y))
				ft_putchar(92);
			else if (i == 1 || i == y || j == 1 || j == x)
				ft_putchar('*');
			else
				ft_putchar(' ');
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}
