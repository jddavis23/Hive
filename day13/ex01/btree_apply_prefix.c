/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_prefix.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdavis <jdavis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/10 17:15:43 by jdavis            #+#    #+#             */
/*   Updated: 2021/06/11 05:08:26 by jdavis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	btree_apply_prefix(t_btree *root, void (*applyf)(void *))
{
	t_btree *node;

	node = root;
	if (node)
	{
		(*applyf)((*node).item);
		btree_apply_prefix((*node).left, applyf);
		btree_apply_prefix((*node).right, applyf);
	}
}
