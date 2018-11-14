/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmauffr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/17 15:27:19 by anmauffr          #+#    #+#             */
/*   Updated: 2018/07/26 21:49:20 by anmauffr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_header.h"

void	ft_putchar(char c, int entre)
{
	write(entre, &c, 1);
}

void	ft_putstr(char *str, int entre)
{
	int		i;

	i = 0;
	while (str[i])
		ft_putchar(str[i++], entre);
}

int		ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i++])
		;
	return (i);
}

void	ft_print_head(int argc, char *argv, int i, int nb_errno)
{
	if (argc > 4)
	{
		if (i != 3 && nb_errno == 0)
			ft_putstr("\n==> ", 1);
		else
			ft_putstr("==> ", 1);
		ft_putstr(argv, 1);
		ft_putstr(" <==\n", 1);
	}
}

int		ft_errno(int nb_error, char *argv)
{
	if (nb_error == 2 || nb_error == 13)
	{
		ft_putstr("tail: ", 2);
		ft_putstr(argv, 2);
		if (nb_error == 2)
			ft_putstr(": No such file or directory\n", 2);
		else
			ft_putstr(": Permission denied\n", 2);
		return (-1);
	}
	return (1);
}
