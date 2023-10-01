#include "main.h"
/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 * * @n: unsigned int number
 * @index: index of bit to print
 * Return: 1 if success or -1 if error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int x = *n;

	if (index + 1 > sizeof(unsigned long int) * 8)
		return (-1);

	x >>= index;
	if ((x & 1))
		*n -= 1 << index;
	return (1);
}

