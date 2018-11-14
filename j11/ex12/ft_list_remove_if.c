/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmauffr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/18 12:15:08 by anmauffr          #+#    #+#             */
/*   Updated: 2018/07/26 03:18:57 by anmauffr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_suite(t_list *elem, t_list **begin_list,
		void *data_ref, int (*cmp)())
{
	t_list	*tmp;

	while (elem->next)
	{
		if (elem->next == NULL)
		{
			*begin_list = 0;
			return ;
		}
		if (cmp(elem->next->data, data_ref) == 0)
		{
			tmp = elem->next->next;
			free(elem->next);
			elem->next = tmp;
		}
		if (cmp(elem->next->data, data_ref) != 0)
			elem = elem->next;
	}
}

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list	*elem;
	t_list	*tmp;

	if (*begin_list == 0)
		return ;
	elem = *begin_list;
	while (cmp(elem->data, data_ref) == 0)
	{
		if (elem->next == NULL)
		{
			*begin_list = 0;
			return ;
		}
		tmp = elem->next;
		free(elem);
		elem = tmp;
		*begin_list = elem;
	}
	ft_suite(elem, begin_list, data_ref, cmp);
}
