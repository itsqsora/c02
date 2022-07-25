/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mac <sorungta@42bangkok.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 02:50:35 by mac               #+#    #+#             */
/*   Updated: 2022/07/26 05:14:15 by mac              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'A' || (str[i] > 'Z' && str[i] < 'a') || str[i] > 'z')
			return (0);
		++i;
	}
	return (1);
}
/*
int	main(void)
{
	printf("\nTest de ft_str_is_alpha :\n");
	printf("0 : %d\n", ft_str_is_alpha(" "));
	printf("1 : %d\n", ft_str_is_alpha("iloveweed"));
	printf("1 : %d\n", ft_str_is_alpha("i love it"));
	printf("0 : %d\n", ft_str_is_alpha("wh3n 1 am"));
	printf("0 : %d\n", ft_str_is_alpha("g3tting h1"));
}*/
