#include "main.h"
/**
 * set_bit - returns the value of a bit at a given index.
 * @n: unsigned int number
 * @index: index of bit to print
 * Return: value of bit at index or -1 if error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i;
	unsigned long int x = *n;

	for (i = 0; i < index; i++)
	{
		x >>= 1;
	}
	if (i == index)
	{
		if (!(x & 1))
			*n += power(2, i);
		return (1);
	}
	else
		return (-1);
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
