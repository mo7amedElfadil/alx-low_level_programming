#include "main.h"
#include <stdio.h>
/**
 * print_chessboard  - prints the chessboard
 * @a: pointer to 2D array containing the board
 * Return: ptr to location of substring or
 *		   NULL if substring is not found
 */
void print_chessboard(char (*a)[8])
{
	int r, c;

	for (r = 0; r < 8; r++)
	{

		for (c = 0; c < 8; c++)
		{
			_putchar(a[r][c]);
		}
		_putchar(10);
	}
}


