/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmuni <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 14:21:51 by bmuni             #+#    #+#             */
/*   Updated: 2022/08/01 00:53:29 by bmuni            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	x;
	unsigned int	t;
	unsigned int	g;

	i = 0;
	t = 0;
	g = ft_strlen(src);
	while (dest[t])
		t++;
	x = t;
	if (size == 0 || size <= x)
		return (g + size);
	while (src[i] && i < size - x - 1)
	{
		dest[t + i] = src[i];
		i++;
	}
	dest[t + i] = ('\0');
	return (x + g);
}
