/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testft_strlen.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdavis <jdavis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 16:35:38 by jdavis            #+#    #+#             */
/*   Updated: 2021/05/29 12:22:54 by jdavis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str);

int	main()
{
	char str[] = "camp";

	
	printf("Number of characters in CAMP is %d\n", ft_strlen(str));

	return (0);
	
}