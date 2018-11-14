/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmauffr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/17 15:27:19 by anmauffr          #+#    #+#             */
/*   Updated: 2018/07/19 10:40:34 by anmauffr         ###   ########.fr       */
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
