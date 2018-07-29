#include "unistd.h"

int	main(int ac, char **av)
{
	if (ac == 2)
	{
		char *str = av[1];
		int i;
		int flag = 0;

		i = 0;
		while (str[i] && flag == 0)
		{
			if (str[i] == 'a')
			{
				write(1, "a", 1);
				flag = 1;
			}
			i++;
		}
	}
	else
		write(1, "a", 1);
	write(1, "\n", 1);
	return 0;
}
