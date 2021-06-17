/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_infix.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdavis <jdavis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/11 05:34:57 by jdavis            #+#    #+#             */
/*   Updated: 2021/06/12 06:05:06 by jdavis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	btree_apply_infix(t_btree *root, void (*applyf)(void *))
{
	t_btree *node;

	node = root;
	if (node)
	{
		btree_apply_infix((*node).left, applyf);
		(*applyf)((*node).item);
		btree_apply_infix((*node).right, applyf);
	}
}
