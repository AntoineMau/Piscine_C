/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puttruc2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmauffr <anmauffr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/23 18:15:36 by judumay           #+#    #+#             */
/*   Updated: 2019/04/24 18:13:38 by anmauffr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"

unsigned int	ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i++])
		;
	return (i);
}

char	*ft_strcut(int nb_cut, char *argv)
{
	int		i;
	char	*str;

	str = malloc(sizeof(*str) * (ft_strlen(argv) - nb_cut));
	i = -1;
	while (argv[++i])
		str[i] = argv[i];
	return (str);
}
