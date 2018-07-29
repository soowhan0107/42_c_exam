#include "unistd.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int ac, char **av)
{
	if (ac == 2)
	{
		int i;
		
		i = 0;
		char *str = av[1];
		while (str[i])
		{
			if (str[i] >= 'a' && str[i] <= 'm')
				ft_putchar(122 - (str[i] - 97));
			else if (str[i] >= 'A' && str[i] <= 'M')
				ft_putchar(90 - (str[i] - 65));
			else if (str[i] >= 'n' && str[i] <= 'z')
				ft_putchar(97 + (122 - str[i]));
			else if (str[i] >= 'N' && str[i] <= 'Z')
				ft_putchar(65 + (90 - str[i]));
			else
				ft_putchar(str[i]);
			i++;
		}
	}
	write(1, "\n", 1);
	return 0;
}
