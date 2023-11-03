int	max(int *tab, unsigned int len)
{
	unsigned int	i = 0;
	unsigned int	res = tab[i];

	if (len == 0)
		return (0);
	while(i < len)
	{
		if (res < tab[i])
			res = tab[i];
		i++;
	}
	return (res);
}