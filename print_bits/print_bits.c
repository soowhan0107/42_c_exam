#include "unistd.h"

void	print_bits(unsigned char octet)
{
	int div = 128;

	while (div > 0)
	{
		if (octet >= div)
		{
			write(1, "1", 1);
			octet = octet - div;
		}
		else
			write(1, "0", 1);
		div = div / 2;
	}
}
