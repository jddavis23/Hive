/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testft_foreach.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdavis <jdavis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 13:40:13 by jdavis            #+#    #+#             */
/*   Updated: 2021/06/09 10:17:15 by jdavis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	long int a;

	a = nb;
	if (a < 0)
	{
		ft_putchar('-');
		a *= -1;
	}
	if (a > 9)
	{
		ft_putnbr(a / 10);
		ft_putchar((a % 10) + '0');
	}
	else
		ft_putchar((a % 10) + '0');
}

void	ft_foreach(int *tab, int length, void (*f)(int));

int main()
{
	int tab[] = {6, 2, 19};
	void (*f)(int);

	
	ft_foreach(tab, 5, &ft_putnbr);
	return (0);
}