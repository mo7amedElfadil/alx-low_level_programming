#include "main.h"
/**
 * print_sign - prints the sign of a number
 * @n: integer to test for polarity
 * Return: 1 and print + if n > 0
 *		   0 and print 0 if n == 0
 *		   -1 and print - if n < 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
}
