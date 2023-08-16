#include "main.h"
#include "6-abs.c"
/**
 * print_last_digit - prints last digit of input
 * @i: integer to print last digit of
 * Return: last digit
 */
int print_last_digit(int i)
{
	_putchar('0' + _abs(i % 10));
	return (_abs(i % 10));
}
