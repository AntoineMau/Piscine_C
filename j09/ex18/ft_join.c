/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_join.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmauffr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/13 12:41:40 by anmauffr          #+#    #+#             */
/*   Updated: 2018/07/13 13:04:19 by anmauffr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_cmp_tab(char **tab)
{
	int		i;
	int		j;
	int		cmp;

	i = 0;
	cmp = 0;
	while (tab[i])
	{
		j = 0;
		while (tab[i][j++])
			cmp++;
		i++;
	}
	return (cmp + 1);
}

char	*ft_join(char **tab, char *sep)
{
	int		i;
	int		j;
	int		k;
	char	*str;

	i = 0;
	while (tab[i++])
		;
	j = 0;
	while (sep[j++])
		;
	str = (char*)malloc(sizeof(*str) * (ft_cmp_tab(tab) + (i * j) - j + 1));
	i = -1;
	k = 0;
	while (tab[++i])
	{
		j = 0;
		while (tab[i][j])
			str[k++] = tab[i][j++];
		j = 0;
		while (sep[j] && tab[i + 1] != '\0')
			str[k++] = sep[j++];
	}
	str[k] = '\0';
	return (str);
}
