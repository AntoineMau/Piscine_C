/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmauffr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/21 09:43:20 by anmauffr          #+#    #+#             */
/*   Updated: 2018/07/22 22:51:41 by anmauffr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

# define BUF_SIZE 10000

# include <unistd.h>
# include <stdlib.h>

void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_putnbr(int nbr);
void	rush(int x, int y);
void	rush00(int x, int y, char *str);
void	rush01(int x, int y, char *str);
void	rush02(int x, int y, char *str);
void	rush03(int x, int y, char *str);
void	rush04(int x, int y, char *str);
int		ft_strlen(char *str);
int		ft_atoi(char *str);
int		ft_print_compare(int nb_colle, int *tab, int choix);
int		ft_print1(int choix, int *tab);
int		ft_count_x_y(int k, int ret, char *buf, int *tab);
int		ft_strcmp(char *s1, char *s2);
char	*ft_strcpy(char *dest, char *src);
char	*ft_strcat(char *dest, char *src);
char	*ft_malloc(int ret, char *buf, char *tmp);

#endif
