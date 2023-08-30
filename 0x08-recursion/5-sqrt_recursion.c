#include "main.h"
/**
 * _sqrt - helper function that returns the square root of n
 * @n: value to return square root of
 * @t: value to use to test for square root
 * Return: -1 when n is negative or doesn't have a natural square root
 *			suqare root of n otherwise
 */
int _sqrt(int n, int t)
{
	if (n == 0 || n == 1)
		return (1);
	else if (n < 0 || t >= n)
		return (-1);
	else if (t * t == n)
		return (t);
	else
		return (_sqrt(n, t + 1));
}

/**
 * _sqrt_recursion - returns the square root of n
 * @n: value to return square root of
 * Return: -1 when n is negative or doesn't have a natural square root
 *			suqare root of n otherwise
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 2));
}


