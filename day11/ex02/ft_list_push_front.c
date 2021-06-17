/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdavis <jdavis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 12:29:24 by jdavis            #+#    #+#             */
/*   Updated: 2021/06/09 14:31:54 by jdavis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list *i;

	if (*begin_list == NULL)
		*begin_list = ft_create_elem(data);
	else
	{
		i = ft_create_elem(data);
		(*i).next = *begin_list;
		*begin_list = i;
	}
}
