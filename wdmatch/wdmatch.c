#include "unistd.h"

int hidenp(char *s1, char *s2)
{
	while (*s2)
	{
		if (*s1 == *s2)
			s1++;
		s2++;
	}
	if (!*s1)
		return (1);
	return (0);
}

int	main(int ac, char **av)
{
	int i;
	i = 0;
	if (ac == 3)
	{
		char *s1 = av[1];
		char *s2 = av[2];
		if (hidenp(s1, s2))
		{
			while (s1[i])
			{
				write(1, &s1[i], 1);
				i++;
			}
		}
	}
	write(1, "\n", 1);
	return 0;
}
