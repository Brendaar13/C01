void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	tmp;
	int	half;

	i = 0;
	tmp = 0;
	half = size / 2;
	while (half-- > 0)
	{
		tmp = tab [i];
		tab [i++] = tab [size -1];
		tab [size-- -1] = tmp;
	}
}
