/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdavis <jdavis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 18:29:43 by jdavis            #+#    #+#             */
/*   Updated: 2021/06/02 16:24:24 by jdavis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int argc, char *argv[])
{
	int a;
	int b;

	a = 0;
	b = 1;
	while (b < argc)
	{
		a = 0;
		while (argv[b][a] != '\0')
		{
			ft_putchar(argv[b][a]);
			++a;
		}
		ft_putchar('\n');
		++b;
	}
	return (0);
}
