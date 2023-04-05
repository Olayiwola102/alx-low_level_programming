#include "main.h"

/**
 * print_chessboard - function that prints the chessboard.
 * @a: the variable used
 */

void print_chessboard(char (*a)[8])
{
	int b_row;
	int b_col;

	for (b_row = 0; b_row < 8; b_row++)
	{
		for (b_col = 0; b_col < 8; b_col++)
			_putchar(a[b_row][b_col]);
		_putchar('\n');
	}
}
