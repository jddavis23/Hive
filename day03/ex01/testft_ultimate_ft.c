/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testft_ultimate_ft.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdavis <jdavis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 12:26:26 by jdavis            #+#    #+#             */
/*   Updated: 2021/05/29 12:06:50 by jdavis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_ultimate_ft(int *nbr);

int	main()
{
	int *ptr = NULL;
	
	
	ft_ultimate_ft(ptr);
	if (ptr)
	{
		printf("yes");
	}
	else
		printf("no");

	return (0);
}