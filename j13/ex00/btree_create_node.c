/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_create_node.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmauffr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/20 11:12:04 by anmauffr          #+#    #+#             */
/*   Updated: 2018/07/20 13:52:52 by anmauffr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

t_btree		*btree_create_node(void *item)
{
	t_btree		*elem;

	elem = NULL;
	elem = malloc(sizeof(t_btree));
	if (elem)
	{
		elem->right = 0;
		elem->left = 0;
		elem->data = item;
	}
	return (elem);
}
