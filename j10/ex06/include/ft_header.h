/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_header.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmauffr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/16 23:57:49 by anmauffr          #+#    #+#             */
/*   Updated: 2018/07/17 00:07:15 by anmauffr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_HEADER_H
# define FT_HEADER_H

# include <unistd.h>

void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_putnbr(int nb);
int		ft_atoi(char *str);
int		ft_cond_nb(char *nb);
int		doop(char *s1, char *operateur, char *s2, int argc);
int		ft_cond_op(char *operateur, int nb);
int		ft_condition(char *operateur, int nb2, int argv);
int		ft_addition(int nb1, int nb2);
int		ft_soustraction(int nb1, int nb2);
int		ft_multiplication(int nb1, int nb2);
int		ft_division(int nb1, int nb2);
int		ft_modulo(int nb1, int nb2);
int		ft_operateur(char operateur);

#endif
