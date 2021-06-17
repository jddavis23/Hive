/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdavis <jdavis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/02 12:24:02 by jdavis            #+#    #+#             */
/*   Updated: 2021/06/02 16:15:05 by jdavis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int i;
	int *array;

	i = 0;
	array = (int*)malloc((max - min) * sizeof(int));
	if (min == max || min > max)
		return (NULL);
	if (array)
	{
		while (min < max)
		{
			array[i] = min++;
			++i;
		}
		return (array);
	}
	else
		return (NULL);
}
