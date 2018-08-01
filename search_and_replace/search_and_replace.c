#include "unistd.h"

int	main(int ac, char **av)
{
	if (ac == 4)
	{
		char *s = av[1];
		int i = 0;
		if (av[2][1])
		{
			write(1, "\n", 1);
			return 0;
		}
		if (av[3][1])
		{
			write(1, "\n", 1);
			return 0;
		}
		while (s[i])
		{
			if (s[i] == av[2][0])
				s[i] = av[3][0];
			i++;
		}
		i = 0;
		while (s[i])
			write(1, &s[i++], 1);
	}
	write(1, "\n", 1);
	return 0;
}
