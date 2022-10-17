/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmuni <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 14:10:11 by bmuni             #+#    #+#             */
/*   Updated: 2022/08/01 23:21:57 by bmuni            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	n;

	i = 0;
	n = 0;
	if (to_find[n] == '\0')
		return (str);
	while (str[i])
	{
		while (str[i + n] == to_find[n] && str[i + n])
			n++;
		if (to_find[n] == '\0')
			return (str + i);
		i++;
		n = 0;
	}
	return (0);
}
