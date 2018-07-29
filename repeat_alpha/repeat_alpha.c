#include "unistd.h"

int	main(int ac, char **av)
{
	int i;

	i = 0;
	char *str = av[1];
	if (ac == 2)
	{
		while (str[i])
		{
			if (str[i] >= 65 && str[i] <= 90)
			{
				int j = 0;
				while (j <= str[i]-65)
				{
					write(1, &str[i], 1);
					j++;
				}
			}
			else if (str[i] >= 97 && str[i] <= 122)
			{
				int j = 0;
				while (j <= str[i]-97)
				{
					write(1, &str[i], 1);
					j++;
				}
			}
			else
				write(1, &str[i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return 0;
}
