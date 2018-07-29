#include "unistd.h"

int	ft_strlen(char *str)
{
	int i;
	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	main(int ac, char **av)
{
	if (ac == 2)
	{
		int i=0;
		char *s = av[1];
		while (s[i] == ' ' || s[i] == '\t')
			i++;
		int e = ft_strlen(s)-1;
		while (s[e] && (s[e] == ' ' || s[e] == '\t'))
		{
			s[e] = '\0';
			e--;
		}
		while (s[i])
		{
			if (s[i] == ' ' || s[i] == '\t')
			{
				while (s[i] == ' ' || s[i] == '\t')
					i++;
				write(1, " ", 1);
				i -= 1;
			}
			else
				write(1, &s[i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return 0;
}
