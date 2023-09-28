#include "main.h"
/**
 * get_bit - returns the value of a bit at a given index.
 * @n: unsigned int number
 * @index: index of bit to print
 * Return: value of bit at index or -1 if error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index + 1 > sizeof(unsigned long int) * 8)
		return (-1);

	n >>= index;
	return (n & 1);
}

