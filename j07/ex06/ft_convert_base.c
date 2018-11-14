/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmauffr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/11 14:25:06 by anmauffr          #+#    #+#             */
/*   Updated: 2018/07/17 11:03:06 by anmauffr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_itoa(int nbr, int *tab, int k)
{
	int		longueur_num;
	int		tmp;
	int		i;
	char	*str;

	longueur_num = 0;
	tmp = nbr;
	i = 0;
	while (tmp > 9 && ++longueur_num)
		tmp /= 10;
	tab[0] = longueur_num;
	str = (char*)malloc(sizeof(*str) * (longueur_num + 2));
	while (longueur_num >= 0)
	{
		tmp = nbr;
		k = longueur_num--;
		while (k--)
			tmp /= 10;
		tmp %= 10;
		str[i++] = tmp + '0';
	}
	str[i] = '\0';
	return (str);
}

char	*ft_strrev(char *str)
{
	int		i;
	int		j;
	char	tmp;

	i = 0;
	j = 0;
	while (str[i])
		i++;
	while (j < --i)
	{
		tmp = str[i];
		str[i] = str[j];
		str[j++] = tmp;
	}
	return (str);
}

int		ft_base_power(char *nbr, char *base, int long_base, int power)
{
	int		i;
	int		j;
	int		number;

	if (power == -1)
	{
		i = 0;
		number = 0;
		while (nbr[i])
		{
			j = 0;
			while (base[j])
			{
				if (nbr[i] - base[j] == 0)
					number = number + (j * ft_base_power(0, 0, long_base, i));
				j++;
			}
			i++;
		}
		return (number);
	}
	if (power == 0)
		return (1);
	else
		return (long_base * ft_base_power(0, 0, long_base, power - 1));
}

void	ft_conv_base(int nbr, char *str, char *base)
{
	int		i;
	int		nb_base;
	int		verif;
	int		k;

	i = 0;
	nb_base = 0;
	while (base[nb_base])
		nb_base++;
	while (nbr != 0)
	{
		k = 0;
		verif = 0;
		while (k != 1)
		{
			if (nbr % nb_base == verif)
			{
				str[i++] = base[verif];
				k++;
			}
			verif++;
		}
		nbr /= nb_base;
	}
	str[i] = '\0';
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		longueur_base;
	int		number;
	char	*str;
	int		tab[1];
	int		neg;

	longueur_base = 0;
	if (nbr[longueur_base] == '-')
		neg = 1;
	while (base_from[longueur_base++])
		;
	str = (char*)malloc(sizeof(*str) * (tab[0] + 2));
	number = ft_base_power(ft_strrev(nbr), base_from, longueur_base - 1, -1);
	str = ft_itoa(number, tab, 0);
	longueur_base = 0;
	while (base_to[longueur_base++])
		;
	if (longueur_base - 1 != 10)
		ft_conv_base(number, str, base_to);
	longueur_base = 0;
	while (str[longueur_base++])
		;
	if (neg == 1)
		str[--longueur_base] = '-';
	return (ft_strrev(str));
}
