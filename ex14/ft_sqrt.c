int	ft_sqrt(int	nb)
{
	int	i;
	int	maxsqrt;

	i = 0;
	maxsqrt = 46340;
	while (i <= maxsqrt)
	{
		if (i * i == nb)
			return (i);
		i++;
	}
	return(0);
}
