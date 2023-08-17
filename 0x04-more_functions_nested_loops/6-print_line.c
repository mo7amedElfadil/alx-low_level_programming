#include "main.h"
/**
 * print_line - draws a straight line on the terminal.
 * @n: integer to determine the length of the line
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar(95);
	}
	_putchar(10);
}
