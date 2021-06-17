/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testft_div_mod.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdavis <jdavis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 14:18:55 by jdavis            #+#    #+#             */
/*   Updated: 2021/05/29 12:11:41 by jdavis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

int main()
{
	int *div = 0;
	int *mod = 0;
	int a;
	int b;
	int c;
	int d;
	
	div = &c;
	mod = &d;
	
	a = 10;
	b = 5;

	ft_div_mod(a, b, div, mod);

	printf("div is %d", *div);

	printf("\n");

	printf("mod is %d", *mod);

	printf("\n");

	return (0);
}