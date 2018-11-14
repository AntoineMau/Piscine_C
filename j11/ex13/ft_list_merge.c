/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_merge.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmauffr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/18 13:37:02 by anmauffr          #+#    #+#             */
/*   Updated: 2018/07/24 19:20:31 by anmauffr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

#include <stdio.h>

void	ft_list_merge(t_list **begin_list1, t_list *begin_list2)
{
	t_list	*elem;

	if (*begin_list1)
	{
		elem = *begin_list1;
		while (elem->next)
			elem = elem->next;
		elem->next = begin_list2;
	}
	else
	{
		if (begin_list2)
			elem = begin_list2;
	}
}
