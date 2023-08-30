#include "main.h"
/**
 * _puts_recursion - prints a string, followed by a new line
 * @s: string to be printed
 */
void _puts_recursion(char *s)
{
	if (!(*s))
		_putchar(10);
	else
	{
		_putchar(*s);
		_puts_recursion(s++);
	}

}
