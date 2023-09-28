#include "main.h"
/**
 * get_bit - returns the value of a bit at a given index.
 * @n: unsigned int number
 * @index: index of bit to print
 * Return: value of bit at index or -1 if error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i;

	if (!n && !index)
	{
		return (0);
	}

	for (i = 0; i < index && n > 0; i++)
		n /= 2;
	if (i == index)
		return (n % 2);
	else
		return (-1);
}

