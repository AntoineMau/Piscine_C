/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmauffr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/16 18:21:13 by anmauffr          #+#    #+#             */
/*   Updated: 2018/07/16 18:25:05 by anmauffr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int		i;
	int		*return_tab;

	return_tab = (int*)malloc(sizeof(*return_tab) * length);
	i = -1;
	while (++i < length)
		return_tab[i] = f(tab[i]);
	return (return_tab);
}
