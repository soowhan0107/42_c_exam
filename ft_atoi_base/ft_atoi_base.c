int	ft_atoi_base(const char *str, int str_base)
{
	int i;
	i = 0;

	int neg;
	neg = 0;

	int nbr;
	nbr = 0;
	while (str[i])
	{
		while ((str[i] >= 9 && str[i] <= 13 ) || str[i] == 32)
			i++;
		if (str[i] == '-')
		{
			while (str[i] == '-')
				i++;
			neg = 1;
		}
		if (str_base == 1 || str_base == 0)
			return (0);
		if (str_base <= 10)
			nbr = (str_base * nbr) + (str[i] - '0');
		if (str_base > 10)
		{
			if (str[i] == 'a')
				nbr = (str_base * nbr) + 10;
			else if (str[i] == 'A')
				nbr = (str_base * nbr) + 10;
			else if (str[i] == 'b')
				nbr = (str_base * nbr) + 11;
			else if (str[i] == 'B')
				nbr = (str_base * nbr) + 11;
			else if (str[i] == 'c')
				nbr = (str_base * nbr) + 12;
			else if (str[i] == 'C')
				nbr = (str_base * nbr) + 12;
			else if (str[i] == 'd')
				nbr = (str_base * nbr) + 13;
			else if (str[i] == 'D')
				nbr = (str_base * nbr) + 13;
			else if (str[i] == 'e')
				nbr = (str_base * nbr) + 14;
			else if (str[i] == 'E')
				nbr = (str_base * nbr) + 14;
			else if (str[i] == 'f')
				nbr = (str_base * nbr) + 15;
			else if (str[i] == 'F')
				nbr = (str_base * nbr) + 15;
			else
				nbr = (str_base * nbr) + (str[i] - '0');
		}
		i++;
	}
	if (neg == 1)
		nbr = nbr * (-1);
	return (nbr);
}

#include "stdio.h"
int	main()
{
	char a[10] = "--233";
	printf("%d\n", ft_atoi_base(a, 10));
	return 0;
}
