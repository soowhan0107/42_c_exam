#include "stdio.h"
#include "stdlib.h"

int	main(int ac, char **av)
{
	if (ac == 3)
	{
		int i;
		int i1 = atoi(av[1]);
		int i2 = atoi(av[2]);
		if (i1 > i2)
		{
			i = i2;
			while (!(i1 % i == 0 && i2 % i == 0))
				i--;
			printf("%d", i);
		}
		if (i1 < i2)
		{
			i = i1;
			while (!(i1 % i == 0 && i2 % i == 0))
				i--;
			printf("%d", i);
		}
		if (i1 == i2)
			printf("%d", i1);
	}
	printf("\n");
	return 0;
}
