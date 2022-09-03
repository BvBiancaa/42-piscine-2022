#include <unistd.h>
void	ft_putchar(char a, char b)
{
	write(1, &a, 1);
	write(1, &b, 1);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;
	char	c;
	char	d;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			c = a / 10 + 48;
			d = a % 10 + 48;
			ft_putchar(c, d);
			write(1, " ", 1);
			c = b / 10 + 48;
			d = b % 10 + 48;
			ft_putchar(c, d);
			if (!(a == 98 && b == 99))
				write(1, ", ", 2);
			b++;
		}
		a++;
	}
}
