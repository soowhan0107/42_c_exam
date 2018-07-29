#include "stdlib.h"

int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char *ft_strdup(char *src)
{
	int i = 0;

	int len = ft_strlen(src);

	char *tmp;

	tmp = (char *) malloc (sizeof(*tmp) * (len + 1));

	while (src[i])
	{
		tmp[i] = src[i];
		i++;
	}
	tmp[i] = src[i];
	return (tmp);
}
