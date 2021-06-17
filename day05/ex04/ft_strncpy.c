/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdavis <jdavis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 09:00:57 by jdavis            #+#    #+#             */
/*   Updated: 2021/05/31 11:14:14 by jdavis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	if (dest && src)
	{
		while (src[i] != '\0' && i < n)
		{
			dest[i] = src[i];
			++i;
		}
		while (i < n)
		{
			dest[i] = '\0';
			++i;
		}
		return (dest);
	}
	else
		return (0);
}
