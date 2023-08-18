#include "main.h"
/**
 * print_number - Function that prints an integer
 * @n: integer to be printed
 * Return: Always 0 (Success)
 */
void print_number(int n)
{
	unsigned int size = 1;

	if (n < 0)
	{
		n = -n;
		_putchar('-');
	}
	while (size < n / 10)
	{
		size *= 10;
	}
	while (size >= 1)
	{
		_putchar('0' + n / size);
		n %= size;
		size /= 10;
	}
}
