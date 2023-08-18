#include "main.h"
/**
 * print_number - Function that prints an integer
 * @n: integer to be printed
 * Return: Always 0 (Success)
 */
void print_number(int n)
{
	unsigned int size = 1;
	unsigned int p = n;

	if (n < 0)
	{
		n++;
		p = -n;
		p++;
		_putchar('-');
	}
	while (size <=  p / 10)
	{
		size *= 10;
	}
	while (size >= 1)
	{

		_putchar('0' + p / size);
		p %= size;
		size /= 10;
	}
}
