#include "main.h"
/**
 * _puts - function that  prints a string, followed by a new line, to stdout.
 * @str: pointer to a string.
 */
void _puts(char *str)
{

	char *c = str;

	while (*(c) != '\0')
	{
		_putchar(*c++);

	}
	_putchar(10);
}
