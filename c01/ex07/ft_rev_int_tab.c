void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	a;

	i = 0;
	while (i < size / 2)
	{
		a = tab[i];
		tab[i] = tab[(size - 1) - i];
		tab[(size - 1) - i] = a;
		i++;
	}
}
