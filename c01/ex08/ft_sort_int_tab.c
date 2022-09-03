void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	a;
	int	swp;

	a = 0;
	while (a < size)
	{
		i = 0;
		while (i + 1 < size)
		{
			if (tab[i] > tab[i + 1])
			{
				swp = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = swp;
			}
			i++;
		}
		a++;
	}
}
