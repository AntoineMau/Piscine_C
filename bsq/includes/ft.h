/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judumay <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/23 13:02:03 by judumay           #+#    #+#             */
/*   Updated: 2018/07/23 20:47:28 by anmauffr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

# include <sys/types.h>
# include <sys/uio.h>
# include <fcntl.h>
# include <unistd.h>
# include <stdlib.h>

# define BUF_SIZE 4096

void			ft_putchar(char c);
void			ft_putstr(char *str);
void			ft_putnbr(int nb);
int				ft_atoi(char *str);
int				ft_count_x(char *str);
int				ft_count_y(char *str);
int				ft_detection(int x, int y, char **buf, int size_square);
unsigned int	ft_strlen(char *str);
char			*ft_strdup(char *src);
char			**ft_split_whitespaces(char *str);
char			*ft_strcut(int nb_cut, char *argv);

#endif
