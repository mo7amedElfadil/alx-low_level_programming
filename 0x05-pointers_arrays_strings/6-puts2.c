#include "main.h"
/**
 * puts2 -	function that  prints every other character of a string
 *			starting with the first character,
 *			followed by a new line, to stdout.
 * @str: pointer to a string.
 */
void puts2(char *str)
{

	char *c = str;
	int i = 0;

	while (*(c + i) != '\0')
	{
		_putchar(*c + i);
		i += 2;
	}
	_putchar(10);
}
