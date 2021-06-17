/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_create_element.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdavis <jdavis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/10 14:47:29 by jdavis            #+#    #+#             */
/*   Updated: 2021/06/10 16:56:04 by jdavis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"
#include <stdio.h>

t_btree	*btree_create_node(void *item);

int main(void)
{
	t_btree *tree;

	tree = btree_create_node("inside");
	printf("%s\n", (*tree).item);
	return (0);
}