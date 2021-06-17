/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jagagas <jagagas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 12:38:36 by jagagas           #+#    #+#             */
/*   Updated: 2021/06/16 15:47:39 by jagagas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

char	*double_size(char *str, int size)
{
	int		i;
	char	*new;

	i = 0;
	new = (char*)malloc(size * sizeof(char));
	while (i < size / 2)
	{
		new[i] = str[i];
		++i;
	}
	free(str);
	return (new);
}

char	*resize(char *str)
{
	int		i;
	char	*new;
	int		len;

	if (str == NULL)
		return (0);
	len = ft_strlen(str);
	if (len < 0)
		return (0);
	new = (char*)malloc(sizeof(char) * (len + 1));
	i = 0;
	while (i < len)
	{
		new[i] = str[i];
		i++;
	}
	new[++i] = '\0';
	free(str);
	return (new);
}

int		read_ok(char *file, int stdin)
{
	int	fd;

	if (stdin)
		return (0);
	if ((fd = open(file, O_RDONLY)) < 0)
		return (-1);
	return (fd);
}

char	*read_file(int fd)
{
	int		i;
	char	c[1];
	char	*res;
	int		ret;
	int		size;

	size = 50;
	if (!(res = (char*)malloc(size * sizeof(char))) || fd < 0)
		return (NULL);
	i = 0;
	while ((ret = read(fd, c, 1)) > 0)
	{
		res[i] = c[0];
		i++;
		if (i == size)
		{
			size *= 2;
			res = double_size(res, size);
		}
	}
	close(fd);
	if (i == 0)
		return (NULL);
	res[i] = '\0';
	return (res);
}
