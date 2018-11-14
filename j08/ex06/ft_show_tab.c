/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmauffr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/18 15:16:30 by anmauffr          #+#    #+#             */
/*   Updated: 2018/07/18 17:27:51 by anmauffr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"

void	ft_putstr(char *str)
{
	int		i;

	i = 0;
	while (str[i])
		ft_putchar(str[i++]);
}

void	ft_putnbr(int nbr, unsigned int number)
{
	int				long_num;
	int				tmp;
	int				i;
	int				j;

	long_num = 0;
	i = 0;
	number = nbr;
	if (nbr < 0)
	{
		ft_putchar('-');
		number = -nbr;
	}
	tmp = number;
	while (tmp > 9 && ++long_num)
		tmp /= 10;
	while (long_num >= 0)
	{
		tmp = number;
		j = long_num--;
		while (j--)
			tmp /= 10;
		tmp %= 10;
		ft_putchar(tmp + '0');
	}
}

void	ft_print_words_tables(char **tab)
{
	int		i;

	i = 0;
	while (tab[i] != 0)
	{
		ft_putstr(tab[i++]);
		ft_putchar('\n');
	}
}

void	ft_show_tab(struct s_stock_par *par)
{
	int		i;

	i = 0;
	while (par[i].str != 0)
	{
		ft_putstr(par[i].str);
		ft_putchar('\n');
		ft_putnbr(par[i].size_param, 1);
		ft_putchar('\n');
		ft_print_words_tables(par[i].tab);
		i++;
	}
}
