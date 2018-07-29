#include "checkmate.h"

int	ft_pawn(char **board, int y, int x)
{
	if (y > 1)
	{
		if (board[y - 1][x - 1] == 'K')
			return (1);
		else if (board[y -1][x + 1] == 'K')
			return (1);
	}
	return (0);
}
