#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_strlen(char *s)
{
	int i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

void	rostring(char *s)
{
	int i;
	int start;
	int end;

	i = 0;
	while (s[i] && (s[i] == ' ' || s[i] == '\t' || s[i] == '\n'))
		i++;
	start = i;
	while (s[i] && s[i] != ' ' && s[i] != '\t' && s[i] != '\t')
		i++;
	end = i;
	while (s[i])
	{
		while (s[i] && (s[i] == ' ' || s[i] == '\t' || s[i] == '\n'))
			i++;
		if (s[i] && s[i] != ' ' && s[i] != '\t' && s[i] != '\t')
		{
			while (s[i] && s[i] != ' ' && s[i] != '\t' && s[i] != '\t')
			{
				ft_putchar(s[i]);
				i++;
			}
			ft_putchar(' ');
		}
	}
	while (start < end)
	{
		ft_putchar(s[start]);
		start++;
	}
}

int		main(int ac, char **av)
{
	int i;

	if (ac > 1)
		rostring(av[1]);
	ft_putchar('\n');
	return (0);
}
