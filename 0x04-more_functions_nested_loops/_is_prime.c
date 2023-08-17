#include <stdio.h>
/**
 * is_prime - funtion to test if p is a prime number
 * @p: integer to test if it is a prime number
 * Return: 1 (Success)
 *		   0 (Failure)
 */
int is_prime(int p)
{
	int i;

	for (i = 2 ; i <= p - 1 ; i++)
	{
		if (p % i == 0)
			return (0);
	}
	return (1);
}

