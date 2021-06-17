/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testbtree_apply_infix.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdavis <jdavis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/11 05:34:57 by jdavis            #+#    #+#             */
/*   Updated: 2021/06/12 09:51:55 by jdavis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"
#include <stdio.h>
#include <stdlib.h>

t_btree	*btree_create_node(void *item);

void	btree_apply_prefix(t_btree *root, void (*applyf)(void *));

void	apply_func(void *item)
{	
	printf("items %s\n", item);
}

int		main(void)
{
	t_btree *tree = btree_create_node("1");
	t_btree *treel = btree_create_node("2");
	t_btree *treer = btree_create_node("3");
	t_btree *treell = btree_create_node("5");
	t_btree *treelr = btree_create_node("6");
	t_btree *treerl = btree_create_node("7");
	t_btree *treerr = btree_create_node("8");

	(*tree).left = treel;
	(*tree).right = treer;
	(*treel).left = treell;
	(*treel).right = treelr;
	(*treer).left = treerl;
	(*treer).right = treerr;


	btree_apply_prefix(tree, &apply_func);

	free(tree);
	free(treel);
	free(treer);
	free(treell);
	free(treelr);
	free(treerl);
	free(treerr);
	return (0);
}