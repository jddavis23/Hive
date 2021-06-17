/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testft_any.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdavis <jdavis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 14:50:15 by jdavis            #+#    #+#             */
/*   Updated: 2021/06/09 08:55:16 by jdavis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		rt_char(char *str)
{
	if (str)
		return (1);
	else
		return (0);
}

int		ft_any(char **tab, int (*f)(char*));

int main(void)
{

	char **dub;
	char *sing = "yes";
	int (*test)(char*);

	dub = &sing;
	test = &rt_char;
	
	if (ft_any(dub, test))
		printf("true\n");
	else if (!ft_any(dub, test))
		printf("false\n");
	return (0);
}