/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mac <sorungta@42bangkok.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 03:35:58 by mac               #+#    #+#             */
/*   Updated: 2022/07/26 03:54:00 by mac              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (src[i] && i + 1 < size)
	{
		dest[i] = src[i];
		++i;
	}
	dest[i] = 0;
	while (src[i])
		++i;
	return (i);
}
/*
int	main(void)
{
	char	*c1;
	char	c2[15] = "destination";
	char	c3[15] = "destination";

	printf("\nTest the ft_strlcpy :\n");
	c1 = "source";
	printf("6, sour : %u, %s\n", ft_strlcpy(c2, c1, 5), c2);
	printf("7, source : %u, %s\n", ft_strlcpy(c3, c1, 8), c3);
}*/
