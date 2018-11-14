/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmauffr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/17 23:55:08 by anmauffr          #+#    #+#             */
/*   Updated: 2018/07/18 00:01:18 by anmauffr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int		ft_list_size(t_list *begin_list)
{
	int		i;
	t_list	*elem;

	i = 0;
	elem = begin_list;
	while (elem)
	{
		elem = elem->next;
		i++;
	}
	return (i);
}
