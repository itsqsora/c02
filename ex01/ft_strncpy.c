/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mac <sorungta@42bangkok.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 02:35:26 by mac               #+#    #+#             */
/*   Updated: 2022/07/26 05:05:32 by mac              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src != (void *)0 && (i < n))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char test1[256] = "asdf";
	char test2[256] = "asdf";
	char test3[256] = "asdf";
	printf("%s\n", ft_strncpy(test1, "uiop", 5));
	printf("%s\n", ft_strncpy(test2, "qwerty", 4));
	printf("%s\n", ft_strncpy(test3, "z", 1));
	}*/
