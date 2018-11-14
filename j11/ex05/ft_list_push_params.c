/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmauffr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/18 00:06:33 by anmauffr          #+#    #+#             */
/*   Updated: 2018/07/25 18:04:40 by anmauffr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_push_params(int ac, char **av)
{
	t_list	*elem_old;
	t_list	*elem_new;

	if (ac < 1 || av == NULL)
		return (0);
	elem_new = ft_create_elem(av[--ac]);
	elem_old = elem_new;
	while (--ac >= 0)
	{
		elem_new->next = ft_create_elem(av[ac]);
		elem_new = elem_new->next;
	}
	return (elem_old);
}
