#include "main.h"
/**
 * binary_to_uint - Converts a binary number to an unsigned int
 * @b: pointer to binary number string
 * Return: unsigned value of binary input
 *			0 if one or more char that is not 0 or 1
 *			b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	int len, i;
	unsigned int dec = 0;

	if (!b)
		return (0);
	len = 0;
	while (b[len])
	{
		if (b[len] == '0' || b[len] == '1')
		{
			len++;
		}
		else
		{
			return (0);
		}
	}
	for (i = len - 1; i >= 0; i--)
		dec += (1 << (len - i - 1)) * (b[i] - 48);


	return (dec);
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

