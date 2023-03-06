#include "main.h"

/**
 * print_chessboard - prints chessboard
 * @a: 2D array
 */

void print_chessboard(char (*a)[8])
{
	int i = 0, j = 0;

	for (; i < 8; i++)
	{
		j = 0;
		for (; j < 8; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
	}
}
