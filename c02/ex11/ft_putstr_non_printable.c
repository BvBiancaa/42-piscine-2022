/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmuni <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 13:59:12 by bmuni             #+#    #+#             */
/*   Updated: 2022/07/26 22:18:49 by bmuni            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_len(char *str)
{
	int	i;

	i = -1;
	while (str[i + 1])
	{
		i++;
		while (str[i])
		       i++;	
	}
	return (i);
}

void	ft_putstr_non_printable(char *str)
{
	int		i;
	char	*n1;

	i = 0;
	n1 = "0123456789abcdef";
	while (i < ft_len(str))
	{
		if (str[i] < 32 || str[i] > 126)
		{
			ft_putchar('\\');
			ft_putchar(n1[str[i] / 16]);
			ft_putchar(n1[str[i] % 16]);
		}
		else
			ft_putchar(str[i]);
		i++;
	}
}
