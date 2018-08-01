#include "unistd.h"

void	check_space(char *s, int *i)
{
	int j;
	
	j = *i;
	while (s[j] == ' ' || s[j] == '\t')
		j++;
	*i = j;
}

int	main(int ac, char **av)
{
	if (ac == 2)
	{
		int i;
		i = 0;

		char *s = av[1];
		if (s[0] == ' ' || s[0] == '\t')
			check_space(s, &i);

		while (s[i] && s[i] != ' ' && s[i] != '\t')
			write(1, &s[i++], 1);

	}
	write(1, "\n", 1);
	return 0;
}
