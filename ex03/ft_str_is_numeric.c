/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mac <sorungta@42bangkok.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 02:29:51 by mac               #+#    #+#             */
/*   Updated: 2022/07/26 05:19:39 by mac              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	is_numeric(char c)
{
	if ('0' <= c && c <= '9')
		return (1);
	return (0);
}

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		if (!is_numeric(str[i++]))
			return (0);
	return (1);
}
/*
int	main(void)
{
	printf("0 : %d\n", ft_str_is_numeric("12345iloveyou"));
	printf("1 : %d\n", ft_str_is_numeric("12345"));
}
*/	
