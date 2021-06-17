/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdavis <jdavis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 12:48:22 by jdavis            #+#    #+#             */
/*   Updated: 2021/06/02 16:25:17 by jdavis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int argc, char *argv[])
{
	int a;

	while (--argc > 0)
	{
		a = 0;
		while (argv[argc][a] != '\0')
		{
			ft_putchar(argv[argc][a]);
			++a;
		}
		ft_putchar('\n');
	}
	return (0);
}
