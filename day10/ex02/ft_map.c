/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdavis <jdavis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 13:53:01 by jdavis            #+#    #+#             */
/*   Updated: 2021/06/08 16:19:49 by jdavis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int i;
	int *ptr;

	i = 0;
	ptr = (int*)malloc((length) * sizeof(int));
	if (ptr)
	{
		while (i < length && tab[i] != '\0')
		{
			ptr[i] = (*f)(tab[i]);
			++i;
		}
		return (ptr);
	}
	return (NULL);
}
