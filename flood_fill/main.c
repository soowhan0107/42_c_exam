#include "stdio.h"

char **make_area(char *tab[])
{
	char **res;
	int i;
	i = 0;
	while (tab[i])
	{
		int k;
		k = 0;
		int p;
		p = 0;
		while (tab[i][p])
		{
			res[i][k] = tab[i][p];
			k++;
			p=p+2;
		}
		i++;
	}
	return (res);
}

int main(void)
{
	char *zone[] = {
		"1 1 1 1 1 1 1 1",
		"1 0 0 0 1 0 0 1",
		"1 0 0 1 0 0 0 1",
		"1 0 1 1 0 0 0 1",
		"1 1 1 0 0 0 0 1",
	};
	return (0);
}
