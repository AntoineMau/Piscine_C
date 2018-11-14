/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmauffr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/17 23:55:08 by anmauffr          #+#    #+#             */
/*   Updated: 2018/07/26 03:12:25 by anmauffr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	unsigned int	i;
	t_list			*elem;

	if (begin_list == 0)
		return (0);
	i = 0;
	elem = begin_list;
	while (i < nbr)
	{
		if (!elem)
			return (0);
		elem = elem->next;
		i++;
	}
	return (elem);
}
