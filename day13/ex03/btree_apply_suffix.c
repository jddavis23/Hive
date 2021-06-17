/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_suffix.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdavis <jdavis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/11 05:57:43 by jdavis            #+#    #+#             */
/*   Updated: 2021/06/11 20:12:53 by jdavis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	btree_apply_suffix(t_btree *root, void (*applyf)(void *))
{
	t_btree *node;

	node = root;
	if (node)
	{
		btree_apply_suffix((*node).left, applyf);
		btree_apply_suffix((*node).right, applyf);
		(*applyf)((*node).item);
	}
}
