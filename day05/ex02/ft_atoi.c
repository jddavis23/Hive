/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdavis <jdavis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 07:38:59 by jdavis            #+#    #+#             */
/*   Updated: 2021/06/01 04:33:27 by jdavis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int sign;
	int i;
	int value;

	i = 0;
	sign = 1;
	value = 0;
	while (str[i] == '\n' || str[i] == '\r' || str[i] == '\v' ||
	str[i] == '\t' || str[i] == '\f' || str[i] == ' ')
		++i;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign *= -1;
		++i;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		value = value * 10 + (str[i] - '0');
		++i;
	}
	return (value * sign);
}
