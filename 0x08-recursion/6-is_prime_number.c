#include "main.h"
/**
 * is_prime_number - determines if n is a prime number
 * @n: value to determine if is prime
 * Return: 1 when n is prime
 *			0 otherwise
 */
int is_prime_number(int n)
{
	int i;
	if (n <= 1)
		return (0);
	else
	{
		for (i = 2; i < n; i++)
			if(n % i == 0)
				return (0);
		return (1);
	}
}


