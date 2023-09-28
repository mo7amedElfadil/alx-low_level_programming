#include "main.h"
/**
 * print_binary - prints conversion of unsigned integer to binary
 * @n: unsigned int number
 */
void print_binary(unsigned long int n)
{
	if (!n)
	{
		putchar(48);
		return;
	}
	if (n / 2)
		print_binary(n / 2);
	_putchar((n % 2) + 48);
}

