#include "unistd.h"

int ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	char_check(char *str, char c, int index)
{
	int i;

	i = 0;
	while (i < index)
	{
		if (str[i] == c)
			return (0);
		i++;
	}
	return (1);
}

int	main(int ac, char **av)
{
	if (ac == 3)
	{
		int i;

		i = 0;
		while (av[1][i])
		{
			if (char_check(av[1], av[1][i], i))
				write(1, &av[1][i], 1);
			i++;
		}
		i = 0;
		while (av[2][i])
		{
			if (char_check(av[2], av[2][i], i))
				if (char_check(av[1], av[2][i], ft_strlen(av[1])))
					write(1, &av[2][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return 0;
}
