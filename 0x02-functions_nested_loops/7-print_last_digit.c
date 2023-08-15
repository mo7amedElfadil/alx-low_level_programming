#include "main.h"
#include <stdlib.h>
/**
 * print_last_digit - prints last digit of input
 * @i: integer to print last digit of
 * Return: last digit
 */
int print_last_digit(int i)
{
	_putchar('0' + abs(i % 10));
	return (abs(i % 10));
}
