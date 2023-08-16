#include "main.h"
/**
 * print_last_digit - prints last digit of input
 * @i: integer to print last digit of
 * Return: last digit
 */
int print_last_digit(int i)
{
	if (i < 0)
	{
		_putchar('0' + -(i % 10));
		return (-(i % 10));
	}
	else
	{
		_putchar('0' + i % 10);
		return (i % 10);
	}
}
