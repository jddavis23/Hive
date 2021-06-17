/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdavis <jdavis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/02 13:18:11 by jdavis            #+#    #+#             */
/*   Updated: 2021/06/03 17:33:17 by jdavis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int i;
	int *array;

	i = 0;
	array = (int*)malloc((max - min) * sizeof(int));
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

int		ft_ultimate_range(int **range, int min, int max)
{
	long int a;
	long int b;

	a = min;
	b = max;
	if (min >= max)
		range = NULL;
	if (b - a > 2147483647)
		return (0);
	if (range && min < max)
	{
		*range = ft_range(min, max);
		return (max - min);
	}
	return (0);
}
