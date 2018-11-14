/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmauffr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/21 19:44:43 by anmauffr          #+#    #+#             */
/*   Updated: 2018/07/22 11:17:59 by anmauffr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft.h"

int		ft_print1(int choix, int *tab)
{
	if (choix == 1)
	{
		ft_putstr("[colle-00] [0] [0] || [colle-01] [0] [0] || ");
		ft_putstr("[colle-02] [0] [0] || [colle-03] [0] [0] || ");
		ft_putstr("[colle-04] [0] [0]\n");
		return (2);
	}
	else if (choix == 2)
	{
		ft_putstr("[colle-02] [1] [");
		ft_putnbr(tab[1]);
		ft_putstr("] || [colle-04] [1] [");
		ft_putnbr(tab[1]);
		ft_putstr("]\n");
		return (2);
	}
	else if (choix == 3)
	{
		ft_putstr("[colle-02] [1] [1] || [colle-03] [1] [1] || ");
		ft_putstr("[colle-04] [1] [1]\n");
		return (2);
	}
	return (0);
}

char	*ft_strcpy(char *dest, char *src)
{
	int		i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strcat(char *dest, char *src)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j])
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}
