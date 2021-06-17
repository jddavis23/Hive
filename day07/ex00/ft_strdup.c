/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdavis <jdavis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/02 10:46:25 by jdavis            #+#    #+#             */
/*   Updated: 2021/06/02 12:20:12 by jdavis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	if (dest && src)
	{
		while (src[i] != '\0')
		{
			dest[i] = src[i];
			++i;
		}
		dest[i] = '\0';
		return (dest);
	}
	else
		return (NULL);
}

int		ft_size(char *src)
{
	int i;

	i = 0;
	if (src)
	{
		while (src[i] != '\0')
			++i;
		return (i);
	}
	return (0);
}

char	*ft_strdup(char *src)
{
	char *copy;

	copy = (char*)malloc(ft_size(src) * sizeof(char));
	if (copy)
	{
		ft_strcpy(copy, src);
		return (copy);
	}
	return (NULL);
}
