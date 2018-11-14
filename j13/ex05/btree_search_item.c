/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_search_item.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmauffr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/20 14:05:14 by anmauffr          #+#    #+#             */
/*   Updated: 2018/07/26 22:44:10 by anmauffr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	*btree_search_item(t_btree *root, void *data_ref,
		int (*cmpf)(void *, void *))
{
	if (cmpf(root, data_ref) == 0)
		return (root);
	else if (root->left || root->right)
		return (btree_search_item(root->left, data_ref, cmpf) || btree_search_item(root->right, data_ref, cmpf));
	else
		return (NULL);
}
