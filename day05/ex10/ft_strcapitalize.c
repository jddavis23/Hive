/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdavis <jdavis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 08:26:49 by jdavis            #+#    #+#             */
/*   Updated: 2021/06/01 19:17:08 by jdavis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*special_char1(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i - 1] >= 33 && str[i - 1] <= 47)
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] -= 32;
		}
		if (str[i - 1] >= 58 && str[i - 1] <= 64)
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] -= 32;
		}
		++i;
	}
	return (str);
}

char	*special_char2(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i - 1] >= 91 && str[i - 1] <= 96)
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] -= 32;
		}
		if (str[i - 1] >= 123 && str[i - 1] <= 127)
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] -= 32;
		}
		++i;
	}
	return (str);
}

char	*whitespace(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i - 1] == '\r' || str[i - 1] == '\v' || str[i - 1] == '\t'
		|| str[i - 1] == '\f' || str[i - 1] == '\n' || str[i - 1] == ' ')
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] -= 32;
		}
		++i;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	whitespace(str);
	special_char1(str);
	special_char2(str);
	while (str[i] != '\0')
	{
		if (str[0] >= 'a' && str[0] <= 'z')
		{
			str[0] -= 32;
		}
		if (str[i - 1] >= 'A' && str[i - 1] <= 'Z')
		{
			if (str[i] >= 'A' && str[i] <= 'Z')
				str[i] += 32;
		}
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			if (str[i - 1] >= 'a' && str[i - 1] <= 'z')
				str[i] += 32;
		}
		++i;
	}
	return (str);
}
