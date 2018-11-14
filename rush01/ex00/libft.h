/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dapinard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/14 14:42:18 by dapinard          #+#    #+#             */
/*   Updated: 2018/07/15 16:23:19 by anmauffr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdio.h>

void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_putstr_grille(char *str);
void	ft_print_grille(char grille[10][10]);
int		ft_verif_grille(char **argv);
int		ft_affichage(int argc, char **argv, char grille[10][10]);
int		ft_backtracking(char grille[10][10], char **argv);

#endif
