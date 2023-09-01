#include "main.h"
/**
 * _puts - function that  prints a string, followed by a new line, to stdout.
 * @c: pointer to a string.
 */
void _puts(char *s)
{

	while (*(s) != '\0')
	{
		_putchar(*s++);

	}
	_putchar(10);
}
