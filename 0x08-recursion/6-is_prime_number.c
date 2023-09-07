#include "main.h"

/**
 * prime - helper function to determines if n is a prime number
 * @n: value to determine if is prime
 * @t: test variable to see if n is divisible by it
 * Return: 1 when n is prime
 *			0 otherwise
 */
int prime(int n, int t)
{
	if (n <= 1)
		return (0);
	if (t < n / 2)
	{
		if (n % t == 0)
			return (0);
		else
			return (prime(n, t + 2));
	}
	else
		return (1);
}

/**
 * is_prime_number - determines if n is a prime number
 * @n: value to determine if is prime
 * Return: 1 when n is prime
 *			0 otherwise
 */
int is_prime_number(int n)
{
	if (n % 2 == 0 || n <= 1)
		return (0);
	return (prime(n, 3));
}


