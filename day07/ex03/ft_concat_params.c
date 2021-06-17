/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdavis <jdavis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 05:17:57 by jdavis            #+#    #+#             */
/*   Updated: 2021/06/03 16:54:56 by jdavis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_count(int argc, char *argv[])
{
	int i;
	int j;
	int count;

	i = 1;
	count = 0;
	if (argc > 1)
	{
		while (i < argc)
		{
			j = 0;
			while (argv[i][j] != '\0')
			{
				++count;
				++j;
			}
			++i;
		}
		return (count);
	}
	return (0);
}

char	*ft_concat_params(int argc, char *argv[])
{
	int i;
	int j;
	int k;
	char*string;

	i = 1;
	k = 0;
	string = (char *)malloc(ft_count(argc, argv) * sizeof(char));
	if (string)
	{
		while (i < argc)
		{
			j = 0;
			while (argv[i][j] != '\0')
			{
				string[k] = argv[i][j++];
				++k;
			}
			string[k++] = '\n';
			++i;
		}
		string[k] = '\0';
		return (string);
	}
	return (NULL);
}
