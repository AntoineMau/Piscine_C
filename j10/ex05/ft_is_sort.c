/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmauffr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/16 18:33:11 by anmauffr          #+#    #+#             */
/*   Updated: 2018/07/18 14:55:15 by anmauffr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_sort_decroiss(int *tab, int length, int (*f)(int, int))
{
	int		i;

	i = -1;
	while (++i < length - 1)
		if (f(tab[i], tab[i + 1]) < 0)
			return (0);
	return (1);
}

int		ft_is_sort_croiss(int *tab, int length, int (*f)(int, int))
{
	int		i;

	i = -1;
	while (++i < length - 1)
		if (f(tab[i], tab[i + 1]) > 0)
			return (0);
	return (1);
}

int		ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	if (ft_is_sort_decroiss(tab, length, f) == 1 ||
			ft_is_sort_croiss(tab, length, f) == 1)
		return (1);
	return (0);
}
