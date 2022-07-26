/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mac <sorungta@42bangkok.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 02:50:35 by mac               #+#    #+#             */
/*   Updated: 2022/07/27 04:07:58 by mac              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	is_alpha(char c)
{
	if ('a' <= c && c <= 'z')
		return (1);
	if ('A' <= c && c <= 'Z')
		return (1);
	return (0);
}

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		if (!is_alpha(str[i++]))
			return (0);
	return (1);
}
/*
int	main(void)
{
	printf("%d\n", ft_str_is_alpha("wh3n 1 am"));
}*/
