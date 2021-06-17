/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdavis <jdavis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 13:58:47 by jdavis            #+#    #+#             */
/*   Updated: 2021/05/27 18:41:39 by jdavis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_doubledigits(int n)
{
	if (n == 0)
	{
		ft_putchar('0');
		ft_putchar(n + '0');
	}
	if (n > 0)
	{
		ft_putchar((n / 10) + '0');
		ft_putchar((n % 10) + '0');
	}
}

void	ft_double(int a, int b)
{
	ft_doubledigits(a);
	ft_putchar(' ');
	ft_doubledigits(b);
	if (a != 98 || b != 99)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb2(void)
{
	int a;
	int b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			ft_double(a, b);
			++b;
		}
		++a;
	}
}
