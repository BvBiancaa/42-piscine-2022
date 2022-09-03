#include <unistd.h>

int	ft_potenza(int i)
{
	int	ris;

	ris = 1;
	while (i > 0)
	{
		ris *= 10;
		i--;
	}
	return (ris);
}

int	ft_nbrlen(int nb)
{
	int	i;

	i = 1;
	while (nb > 9)
	{
		nb = nb / 10;
		i++;
	}
	return (i);
}

void	ft_putnbr(int nb)
{
	int	num;
	char	c;
	int	i;
	
	if (nb == -2147483648)
	{
		write(1, "-21", 3);
		ft_putnbr(47483648);
	}
	else if (nb < 0)
	{
		write(1, "-", 1);
		nb *= -1;
	}
	num = nb;
	i = ft_nbrlen(num);
	while (i > 0)
	{
		c = (nb / ft_potenza(i - 1)) % 10 + 48;
		write(1, &c, 1);
		i--;
		
	}
}
