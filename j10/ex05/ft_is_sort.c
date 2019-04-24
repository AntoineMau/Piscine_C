/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmauffr <anmauffr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/16 18:33:11 by anmauffr          #+#    #+#             */
/*   Updated: 2019/04/24 17:51:37 by anmauffr         ###   ########.fr       */
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
	if (ft_is_sort_decroiss(tab, length, f) == 1
		|| ft_is_sort_croiss(tab, length, f) == 1)
		return (1);
	return (0);
}
