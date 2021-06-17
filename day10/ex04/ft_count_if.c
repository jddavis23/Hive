/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdavis <jdavis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 16:32:24 by jdavis            #+#    #+#             */
/*   Updated: 2021/06/08 17:21:49 by jdavis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int (*f)(char*))
{
	int count;
	int i;

	count = 0;
	i = 0;
	if (tab)
	{
		while (tab[i] != 0)
		{
			if ((*f)(tab[i]))
				++count;
			++i;
		}
		return (count);
	}
	return (0);
}