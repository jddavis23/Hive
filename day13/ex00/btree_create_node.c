/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_create_node.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdavis <jdavis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/10 14:47:29 by jdavis            #+#    #+#             */
/*   Updated: 2021/06/10 17:04:06 by jdavis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

t_btree	*btree_create_node(void *item)
{
	t_btree *element;

	element = (t_btree*)malloc(sizeof(t_btree));
	if (element)
	{
		(*element).left = 0;
		(*element).right = 0;
		(*element).item = item;
		return (element);
	}
	return (element);
}
