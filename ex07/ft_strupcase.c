/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mac <sorungta@42bangkok.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 02:36:25 by mac               #+#    #+#             */
/*   Updated: 2022/07/27 04:08:32 by mac              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	is_lowercase(char c)
{
	if ('a' <= c && c <= 'z')
		return (1);
	return (0);
}

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (is_lowercase(str[i]))
			str[i] = str[i] - 32;
		++i;
	}
	return (str);
}
