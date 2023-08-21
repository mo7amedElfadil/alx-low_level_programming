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
	int l = 0;

	while (*(c + l) != '\0')
	{
		if (l % 2 == 0)
			_putchar(*(c + l));
		l++;
		}

	_putchar(10);
}
