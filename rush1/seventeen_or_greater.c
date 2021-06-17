/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   seventeen_or_greater.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdonnell <wdonnell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/06 17:43:13 by wdonnell          #+#    #+#             */
/*   Updated: 2021/06/06 17:47:27 by wdonnell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	seventeen_or_greater(char **given_arr)
{
	int i;
	int j;
	int count;

	count = 0;
	i = 0;
	while (i < 9)
	{
		j = 0;
		while (j < 9)
		{
			if (given_arr[i][j] != '.')
				count++;
			if (count >= 17)
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}
