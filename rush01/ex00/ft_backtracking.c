/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_backtracking.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmauffr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/15 16:25:02 by anmauffr          #+#    #+#             */
/*   Updated: 2018/07/15 16:27:09 by anmauffr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_ligne(char grille[10][10], char **argv, char nb_find, int nb_ligne)
{
	int		i;

	i = 0;
	while (argv[nb_ligne][i])
	{
		if (argv[nb_ligne][i] == nb_find)
			return (0);
		i++;
	}
	i = 0;
	while (i < 9)
	{
		if (grille[nb_ligne - 1][i] == nb_find)
			return (0);
		i++;
	}
	return (1);
}

int		ft_col(char grille[10][10], char **argv, char nb_find, int nb_colonne)
{
	int		i;

	i = 0;
	while (argv[i])
	{
		if (argv[i][nb_colonne] == nb_find)
			return (0);
		i++;
	}
	i = 0;
	while (i < 9)
	{
		if (grille[i - 1][nb_colonne] == nb_find)
			return (0);
		i++;
	}
	return (1);
}

int		ft_backtracking(char grille[10][10], char **argv)
{
	int		i;
	int		j;
	int		nb;

	i = 1;
	while (i < 10)
	{
		j = 0;
		while (j < 9)
		{
			grille[i - 1][j] = argv[i][j];
			nb = 0;
			while (nb < 9)
			{
				if (grille[i - 1][j] == '.' && ft_ligne(grille, argv, nb + '1',
							i) == 1 && ft_col(grille, argv, nb + '1', j) == 1)
					grille[i - 1][j] = nb + '1';
				nb++;
			}
			j++;
		}
		i++;
	}
	return (0);
}
