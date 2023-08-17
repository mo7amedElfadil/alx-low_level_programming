#include"main.h"
/**
 * print_triangle - draws a triangle on the terminal.
 * @size: integer to determine the size of the triangle
 */
void print_triangle(int size)
{
	int i, j;

	for (i = 0; i < size; i++)
	{
		for (j = 1; j < size - i; j++)
		{
			_putchar(32);
		}
		for (j = size - i; j <= size; j++)
		{
			_putchar(35);
		}

		_putchar(10);

	}
	if (size <= 0)
		_putchar(10);
}
