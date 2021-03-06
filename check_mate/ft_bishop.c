#include "checkmate.h"

int	ft_bishop(char **board, int y, int x)
{
	int	len;
	int	i;
	int	j;

	len = (int)ft_strlen(board[1]);
	i = y;
	j = x;
	while (++i <= len && ++j < len && ft_opiece(board[i][j]) != 1) //Down Right
	{
		if (board[i][j] == 'K')
			return (1);
	}
	i = y;
	j = x;
	while (--i >= 1 && --j >= 0 && ft_opiece(board[i][j]) != 1) //Down Left
	{
		if (board[i][j] == 'K')
			return (1);
	}
	i = y;
	j = x;
	while (--i >= 1 && ++j < len && ft_opiece(board[i][j]) != 1) //Up Right
	{
		if (board[i][j] == 'K')
			return (1);
	}
	i = y;
	j = x;
	while (--i >= 1 && --j >= 0 && ft_opiece(board[i][j]) != 1) //Up Left
	{
		if (board[i][j] == 'K')
			return (1);
	}
	return (0);
}
