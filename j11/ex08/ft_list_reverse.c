/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmauffr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/18 00:48:44 by anmauffr          #+#    #+#             */
/*   Updated: 2018/07/24 18:25:52 by anmauffr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_suite(t_list **begin_list, int i)
{
	int		long_list;
	int		j;
	t_list	*elem1;
	t_list	*elem2;
	t_list	*tmp;

	if (*begin_list == 0 || (long_list = 0))
		return ;
	elem1 = *begin_list;
	while (elem1 && long_list++ != -5)
		elem1 = elem1->next;
	elem2 = *begin_list;
	long_list++;
	while (++i < --long_list)
	{
		j = 0;
		elem1 = *begin_list;
		while (j++ < long_list - 1)
			elem1 = elem1->next;
		tmp = elem1->data;
		elem1->data = elem2->data;
		elem2->data = tmp;
		elem2 = elem2->next;
	}
}

void	ft_list_reverse(t_list **begin_list)
{
	ft_suite(begin_list, -1);
}
