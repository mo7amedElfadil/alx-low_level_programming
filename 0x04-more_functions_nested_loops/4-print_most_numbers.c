#include "main.h"
/**
 * print_most_numbers - print all single digit no. 0-9 except for 2 & 4
 */
void print_most_numbers(void)
{
	int c;

	for (c = 48; c <= 57; c++)
		if (c != 50 && c != 52)
			_putchar(c);
	_putchar(10);
}
