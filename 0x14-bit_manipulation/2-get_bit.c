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

	for (i = 0; i < index && n > 0; i++)
		n >>= 1;
	if (i == index)
		return (n & 1);
	else
		return (-1);
}

