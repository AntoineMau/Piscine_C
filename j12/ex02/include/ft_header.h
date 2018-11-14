/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_header.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmauffr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/17 15:20:06 by anmauffr          #+#    #+#             */
/*   Updated: 2018/07/26 21:50:16 by anmauffr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_HEADER_H
# define FT_HEADER_H

# include <unistd.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <errno.h>

# define BUF_SIZE 4096

void	ft_putchar(char c, int entre);
void	ft_putstr(char *str, int entre);
void	ft_print_head(int argc, char *argv, int i, int nb_errno);
int		ft_strlen(char *str);
int		ft_atoi(char *str);
int		ft_errno(int nb_errno, char *argv);

#endif
