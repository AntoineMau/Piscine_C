/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmauffr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/18 13:39:27 by anmauffr          #+#    #+#             */
/*   Updated: 2018/07/25 09:59:55 by anmauffr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>

int		ft_swap(t_list *elem)
{
	char	*tmp;

	tmp = elem->data;
	elem->data = elem->next->data;
	elem->next->data = tmp;
	return (0);
}

void	ft_list_sort(t_list **begin_list, int (*cmp)())
{
	int		i;
	int		ok;
	t_list	*elem;

	i = 0;
	if (*begin_list == 0)
		return ;
	elem = *begin_list;
	while (elem && i++ != -5 && !(ok = 0))
		elem = elem->next;
	elem = *begin_list;
	while (ok < i)
	{
		if (elem->next == 0)
			elem = *begin_list;
		if (cmp(elem->data, elem->next->data) > 0)
			ok = ft_swap(elem);
		else
			ok++;
		elem = elem->next;
	}
}
