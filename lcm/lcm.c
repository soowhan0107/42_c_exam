unsigned int	lcm(unsigned int a, unsigned int b)
{
	int i;

	i = 1;
	if (a == 0 || b == 0)
		return (0);
	if (i % a  == 0 && i % b == 0)
		return (i);
	else
		while (i % a != 0 || i % b != 0)
			i++;
	return (i);
}
