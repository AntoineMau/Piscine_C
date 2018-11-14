/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach_if.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmauffr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/18 12:08:26 by anmauffr          #+#    #+#             */
/*   Updated: 2018/07/23 11:22:38 by anmauffr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_foreach_if(t_list *begin_list, void (*f)(void *),
		void *data_ref, int (*cmp)())
{
	t_list	*elem;

	elem = begin_list;
	while (elem)
	{
		if (cmp(elem->data, data_ref) == 0)
			f(elem->data);
		elem = elem->next;
	}
}
