int	is_power_of_2(unsigned int n)
{
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	if (n > 1)
	{
		unsigned int i;
		i = 2;
		while (i <= n)
			i = i * 2;
		if (i/2 == n)
			return (1);
		else
			return (0);
	}
	return (0);
}
