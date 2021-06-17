/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testft_ultimate_div_mod.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdavis <jdavis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 15:52:14 by jdavis            #+#    #+#             */
/*   Updated: 2021/05/29 12:15:16 by jdavis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b);

int	 main()
{
	int *a;
	int *b;
	int c;
	int d;

	a = &c;
	b = &d;
	c = 10;
	d = 2;

	ft_ultimate_div_mod(a, b);

	printf("the div is %d", *a);
	
	printf("\n");

	printf("the mod is %d", *b);

	printf("\n");

	return (0);
	
}
