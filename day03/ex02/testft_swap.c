/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testft_swap.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdavis <jdavis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/28 16:27:49 by jdavis            #+#    #+#             */
/*   Updated: 2021/05/29 08:13:45 by jdavis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b);

int main()
{
	int *a = 0;
	int *b = 0;
	
	int c;
	int d;
	
	a = &c;
	b = &d;
	
	c = 10;
	d = 0;

	ft_swap(a, b);

	printf("a is %d", *a);

	printf("\n");

	printf("b is %d", *b);

	printf("\n");

	return (0);
}