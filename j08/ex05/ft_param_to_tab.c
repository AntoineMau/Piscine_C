/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stock_par.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmauffr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/18 15:04:26 by anmauffr          #+#    #+#             */
/*   Updated: 2018/07/18 16:54:28 by anmauffr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"

char		*ft_strdup(char *src)
{
	int		i;
	char	*str;

	i = 0;
	while (src[i])
		i++;
	str = (char*)malloc(sizeof(*src) * (i + 1));
	i = 0;
	while (src[i])
	{
		str[i] = src[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

t_stock_par	*ft_param_to_tab(int ac, char **av)
{
	t_stock_par		*string;
	int				i;
	int				j;

	i = 0;
	string = malloc(sizeof(*string) * (ac + 1));
	while (i < ac)
	{
		j = 0;
		while (av[i][j])
			j++;
		string[i].size_param = j;
		string[i].str = av[i];
		string[i].copy = ft_strdup(av[i]);
		string[i].tab = ft_split_whitespaces(av[i]);
		i++;
	}
	string[i].str = 0;
	return (string);
}
