#include "unistd.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int n)
{
	if (n >= 10)
		ft_putnbr(n / 10);
	ft_putchar((n % 10) + '0');
}

int	main(int ac, char **av)
{
	(void) av;
	if (ac == 1)
		ft_putchar('0');
	if (ac > 1)
		ft_putnbr(ac-1);
	write(1, "\n", 1);
	return 0;
}
