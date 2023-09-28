#include "main.h"
/**
 * set_bit - sets the value of a bit to 1 at a given index.
 * * @n: unsigned int number
 * @index: index of bit to print
 * Return: 1 if success or -1 if error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int x = *n;

	if (index + 1 > sizeof(unsigned long int) * 8)
		return (-1);

	x >>= index;
	if (!(x & 1))
		*n += power(2, index);
	return (1);
}
/**
 * power - power
 * @x: base
 * @y: power
 *
 * Return: power
 */
int power(int x, int y)
{
	int z = x;

	if (y == 0)
		return (1);
	while (--y)
	{
		z *= x;
	}
	return (z);
}
