#include "stdlib.h"

int	*ft_range(int start, int end)
{
	int *tab;
	int i;
	i = 0;
	if (start > end)
	{
		tab = (int *)malloc(sizeof(int) * (start - end + 1));
		int p = start-end;
		while (p-- >= 0)
			tab[i++] = start--;
	}
	else if (end > start)
	{
		tab = (int *)malloc(sizeof(int) * (end - start + 1));
		int p = end-start;
		while (p-- >= 0)
			tab[i++] = start++;
	}
	else
	{
		tab = (int *)malloc(sizeof(int) * 2);
		tab[0] = start;
		i++;
	}
	tab[i] = '\0';
	return (tab);
}
