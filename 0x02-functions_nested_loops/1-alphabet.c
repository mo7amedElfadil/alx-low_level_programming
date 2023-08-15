#include "main.h"
/**
 * print_alphabet - Print the alphabet, in lowercase, followed by a new line.
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	int i = 96;

	while (i++ < 122)
	{
		_putchar(i);
	}
	_putchar(10);
}
