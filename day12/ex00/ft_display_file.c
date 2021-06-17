/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdavis <jdavis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/10 11:29:43 by jdavis            #+#    #+#             */
/*   Updated: 2021/06/11 05:14:41 by jdavis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

void	orwc(char *str)
{
	int		fd;
	char	buf[1];

	fd = open(str, O_RDONLY);
	while (read(fd, buf, 1))
	{
		write(1, buf, 1);
	}
	close(fd);
}

int		main(int argc, char **argv)
{
	if (argc == 2)
		orwc(argv[1]);
	else if (argc > 2)
		write(1, "Too many arguments.\n", 20);
	else if (argc < 2)
		write(1, "File name missing.\n", 19);
	return (0);
}
