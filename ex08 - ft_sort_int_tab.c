void	ft_sort_int_tab(int *tab, int size)
{
	int	a;
	int	b;

	while (size >= 0)
	{
		a = 0;
		while (a < size -1)
		{
			if (tab[a] > tab[a + 1])
			{
				b = tab[a];
				tab[a] = tab[a + 1];
				tab[a + 1] = b;
			}
			a++;
		}
		size--;
	}
}
