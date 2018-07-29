#include "unistd.h"

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	
	int j;

	j = i;
	i = 0;
	while (i < j)
	{
		write(1, &str[i], 1);
		i++;
	}
}
