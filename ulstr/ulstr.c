#include "unistd.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int ac, char **av)
{
	int i;

	i = 0;
	char *str;
	str = av[1];
	if (ac == 2)
	{
		while (str[i])
		{
			if (str[i] >= 97 && str[i] <= 122)
				ft_putchar(str[i] - 32);
			else if (str[i] >= 65 && str[i] <= 90)
				ft_putchar(str[i] + 32);
			else
				ft_putchar(str[i]);
			i++;
		}
	}
	write(1, "\n", 1);
	return 0;
}
