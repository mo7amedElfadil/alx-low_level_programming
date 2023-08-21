#include "main.h"
/**
 * puts_half -	function that  prints the second half of a string.
 *			If the number of characters is odd, the function should
 *			print the last n characters of the string,
 *			where n = (length_of_the_string - 1) / 2
 *			followed by a new line, to stdout.
 * @str: pointer to a string.
 */
void puts_half(char *str)
{
	char *c = str;
	int n, l = 0;

	while (*(c + l) != '\0')
	{
		l++;
	}

	n = ((l + 1) / 2);
	while (n <= l)
		_putchar(*(c + n++));



	_putchar(10);
}
