#include "main.h"
/**
 * print_rev - function that prints a string in reverse,
 *				followed by a new line, to stdout.
 * @s: pointer to a string.
 */
void print_rev(char *s)
{
	char *c = s;
	int l = 0;

	while (*(c + l) != '\0')
	{
		l++;
	}

	while (l-- >= 0)
	{
		_putchar(*(c + l));
	}
	_putchar(10);
}
