#include "checkmate.h"

int	ft_opiece(char piece)
{
	if (piece == 'P' || piece == 'Q' || piece == 'B' || piece == 'R')
		return (1);
	return (0);
}
