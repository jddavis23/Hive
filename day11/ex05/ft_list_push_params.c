/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdavis <jdavis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/09 14:38:05 by jdavis            #+#    #+#             */
/*   Updated: 2021/06/09 18:08:06 by jdavis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_push_params(int ac, char **av)
{
	t_list *node;
	t_list *move;

	if (ac > 1)
	{
		node = ft_create_elem(av[--ac]);
		while (ac > 1)
		{
			move = ft_create_elem(av[--ac]);
			(*node).next = move;
		}
		return (node);
	}
	return (NULL);
}
