#include "flood_fill.h"

char **make_area(char *tab)
{
	char **res[100][100];
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
	char **area;
	t_point size = {8, 5};
	t_point begin = {2, 2};
	char *zone[] = {
		"1 1 1 1 1 1 1 1",
		"1 0 0 0 1 0 0 1",
		"1 0 0 1 0 0 0 1",
		"1 0 1 1 0 0 0 1",
		"1 1 1 0 0 0 0 1",
	}

	area = make_area(zone);
	print_tab(area);
	flood_fill(area, size, begin);
	putc('\n');
	print_tab(area);
	return (0);
}
