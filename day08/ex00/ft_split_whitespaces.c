/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdavis <jdavis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 10:40:20 by jdavis            #+#    #+#             */
/*   Updated: 2021/06/17 13:43:25 by jdavis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		whitespace(char str)
{
	if (str == ' ' || str == '\n' || str == '\t')
		return (1);
	else
		return (0);
}

int		ft_wrds(char *str)
{
	int  i;
	int  count;
	char word;

	word = 'Y';
	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		if (!whitespace(str[i]) && word == 'Y')
		{
			++count;
			word = 'N';
		}
		else if (whitespace(str[i]))
			word = 'Y';
		++i;
	}
	return (count);
}

int		ft_ltr(char *str)
{
	int i;
	int count;

	i = 0;
	count = 0;
	while (!whitespace(str[i]))
	{
		++count;
		++i;
	}
	return (count);
}

char	**ft_split_whitespaces(char *str)
{
	char**p;
	int i;
	int j;
	int k;
	int store;

	i = 0;
	k = 0;
	store = ft_wrds(str);
	p = (char**)malloc(sizeof(char*) * ft_wrds(str));
	if (p)
	{
		while (str[k] != '\0')
		{
			j = 0;
			while (whitespace(str[k]))
			{
				++k;
			}
			if (str[k])
			{
				p[i] = (char*)malloc(sizeof(char) * ft_ltr(&str[k]));
				while (!whitespace(str[k]) && str[k] != '\0')
					p[i][j++] = str[k++];
				if (j > 0)
					p[i][j] = '\0';
			}
			++i;
		}
		p[i] = NULL;
		return (p);
	}
	return (NULL);
}

int main()
{
	char **str;
	int i;
	
	str = ft_split_whitespaces(" look  here.    now school j");
	i = 0;
	while (str[i] != NULL)
	{
		printf("%s\n", str[i]);
		++i;
	}
	return (0);
}