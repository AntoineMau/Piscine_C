/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   doop.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmauffr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/16 18:54:23 by anmauffr          #+#    #+#             */
/*   Updated: 2018/07/17 00:08:02 by anmauffr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_header.h"
#include <stdio.h>

int		ft_operateur(char operateur)
{
	if (operateur == '+')
		return (0);
	else if (operateur == '-')
		return (1);
	else if (operateur == '*')
		return (2);
	else if (operateur == '/')
		return (3);
	else
		return (4);
}

int		doop(char *s1, char *operateur, char *s2, int argc)
{
	int		(*ft_calcul[5])(int, int);
	int		nb1;
	int		nb2;
	int		resultat;

	ft_calcul[0] = &ft_addition;
	ft_calcul[1] = &ft_soustraction;
	ft_calcul[2] = &ft_multiplication;
	ft_calcul[3] = &ft_division;
	ft_calcul[4] = &ft_modulo;
	nb1 = ft_atoi(s1);
	nb2 = ft_atoi(s2);
	if (ft_condition(operateur, nb2, argc) == 0)
		return (0);
	resultat = ft_calcul[ft_operateur(operateur[0])](nb1, nb2);
	ft_putnbr(resultat);
	ft_putchar('\n');
	return (0);
}

int		main(int argc, char **argv)
{
	if (argc != 4)
		return (0);
	doop(argv[1], argv[2], argv[3], argc);
	return (0);
}
