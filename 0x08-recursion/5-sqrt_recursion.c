#include "main.h"
/**
 * _sqrt_recursion - returns the square root of n
 * @n: value to return square root of
 * Return: -1 when n is negative or doesn't have a natural square root
 *			suqare root of n otherwise
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else if (n == 1)
		return (1);
	else
		return (n / _sqrt_recursion((n + 1) / 2));
}


