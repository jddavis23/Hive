/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdavis <jdavis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/30 03:08:57 by jdavis            #+#    #+#             */
/*   Updated: 2021/05/30 10:33:39 by jdavis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	printspace(int x)
{
	int i;

	i = x;
	while (i > 2)
	{
		ft_putchar(' ');
		--i;
	}
	if (x > 2)
		ft_putchar('*');
}

void	topwidth(int x)
{
	int i;

	i = x;
	if (i == 2)
		ft_putchar('\\');
	while (i > 2)
	{
		ft_putchar('*');
		--i;
	}
	if (x > 2)
		ft_putchar('\\');
	ft_putchar('\n');
}

void	leftlength(int y, int x)
{
	int i;

	i = y;
	if (i == 2)
		ft_putchar('\\');
	while (i > 2)
	{
		ft_putchar('*');
		printspace(x);
		ft_putchar('\n');
		--i;
	}
	if (y > 2)
		ft_putchar('\\');
}

void	bottomwidth(int x)
{
	int i;

	i = x;
	if (i == 2)
		ft_putchar('/');
	while (i > 2)
	{
		ft_putchar('*');
		--i;
	}
	if (x > 2)
		ft_putchar('/');
}

void	rush(int x, int y)
{
	if (x > 0 && y > 0)
	{
		ft_putchar('/');
		topwidth(x);
		leftlength(y, x);
		bottomwidth(x);
		ft_putchar('\n');
	}
}
