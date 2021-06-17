/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdavis <jdavis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/09 11:32:26 by jdavis            #+#    #+#             */
/*   Updated: 2021/06/09 17:32:07 by jdavis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int	ft_list_size(t_list *begin_list)
{
	t_list	*node;
	int		count;

	node = begin_list;
	if (begin_list)
	{
		count = 1;
		while ((*node).next != NULL)
		{
			++count;
			node = (*node).next;
		}
		return (count);
	}
	return (0);
}
