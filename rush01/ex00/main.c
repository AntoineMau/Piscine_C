/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmauffr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/14 12:16:42 by anmauffr          #+#    #+#             */
/*   Updated: 2018/07/15 15:50:07 by anmauffr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		main(int argc, char **argv)
{
	char	grille[10][10];

	(void)argc;
	ft_backtracking(grille, argv);
	ft_print_grille(grille);
	return (0);
}
