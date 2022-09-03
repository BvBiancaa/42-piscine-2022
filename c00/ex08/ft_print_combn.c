#include <unistd.h>

void	ft_putarray(int *a, int n)
{
	char	c;
	int	i;

	i = 0;
	while (i < n)
	{
		c = a[i] + 48;
		write(1, &c, 1);
		i++;
	}
}

int	*ft_assegnazione(int *a, int n)
{
	int	i;

	n--;
	i = 0;
	while (a[i] < ((10 - n) + i))
		i++;
	a[i - 1]++;
	while (i <= n)
	{
		a[i] = a[i - 1] + 1;
		i++;
	}
	return (a);
}

void	ft_print_combn(int n)
{
	int	array[n];
	int	i;
	int	count;

	i = 0;
	array[0] = 0;
	while (i + 1 < n)
        {
		array[i + 1] = array[i] + 1;
                i++;
        }
	while (array[0] < (10 - n))
	{
		while (array[n - 1] <= 9)
		{
			ft_putarray(array, n);
			array[n - 1]++;
			if (!(n == 1 && array[0] == 10))
			write(1, ", ", 2);
		}
		if (n > 1)
		ft_assegnazione(array, n);
	}
	ft_putarray(array, n);
}
