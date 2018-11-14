/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   affichage.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmauffr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/14 18:29:45 by anmauffr          #+#    #+#             */
/*   Updated: 2018/07/15 16:29:03 by anmauffr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr(char *str)
{
	int		i;

	i = 0;
	while (str[i])
		ft_putchar(str[i++]);
}

void	ft_putstr_grille(char grille[10])
{
	int		i;

	i = 0;
	while (i < 9)
	{
		ft_putchar(grille[i++]);
		if (i + 1 != 10)
			ft_putchar(' ');
	}
}

void	ft_print_grille(char grille[10][10])
{
	int		i;

	i = 0;
	while (i < 9)
	{
		ft_putstr_grille(grille[i++]);
		ft_putchar('\n');
	}
}

int		ft_verif_grille(char **argv)
{
	int		i;
	int		j;

	i = 1;
	while (argv[i])
	{
		j = 0;
		while (argv[i][j])
		{
			if ((argv[i][j] >= '1' && argv[i][j] <= '9') || argv[i][j] == '.')
				j++;
			else
				return (0);
		}
		if (j != 9)
			return (0);
		i++;
	}
	if (i != 10)
		return (0);
	return (1);
}

int		ft_affichage(int argc, char **argv, char grille[10][10])
{
	int		i;
	int		j;

	i = 1;
	if (ft_verif_grille(argv) == 0)
	{
		ft_putstr("Error\n");
		return (0);
	}
	while (i < argc)
	{
		j = 0;
		while (argv[i][j])
		{
			grille[i - 1][j] = argv[i][j];
			j++;
		}
		grille[i][j] = '\0';
		i++;
	}
	j = 0;
	grille[i][j] = '\0';
	ft_print_grille(grille);
	return (0);
}
