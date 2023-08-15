#include "main.h"
/**
 * print_alphabet_x10 - Print the alphabet, in lowercase,
 *						followed by a new line, ten times.
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	int ten = -1;

	while (ten++ < 9)
	{
		int i = 96;

		while (i++ < 122)
		{
			_putchar(i);
		}
		_putchar(10);
	}
}
