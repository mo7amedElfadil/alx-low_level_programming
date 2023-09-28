#include "main.h"
/**
 * flip_bits -  determines number of bits you would need
 *				to flip to get from one number to another.
 * @n: 1st unsigned int number
 * @m: 2nd unsigned int number
 * Return: number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	if (n == m)
	{
		return (0);
	}
	if ((n & 1) == (m & 1))
		return (0 + flip_bits(n >> 1, m >> 1));
	else
		return (1 + flip_bits(n >> 1, m >> 1));
}

