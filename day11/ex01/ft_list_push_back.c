/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdavis <jdavis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 07:55:51 by jdavis            #+#    #+#             */
/*   Updated: 2021/06/09 14:28:33 by jdavis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void		ft_list_push_back(t_list **begin_list, void *data)
{
	t_list *i;

	if (*begin_list == NULL)
	{
		*begin_list = ft_create_elem(data);
	}
	else
	{
		i = *begin_list;
		while ((*i).next != NULL)
		{
			i = (*i).next;
		}
		(*i).next = ft_create_elem(data);
	}
}
