#include "main.h"
/**
 * factorial - returns the factorial of a give number
 * @n: int to print factorial of
 * Return: -1 when n is negative
 *			1 when n is 0 or 1
 *			factorial of n otherwise
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if	(n <= 1)
		return (1);
	else
		return (n * factorial(n - 1));
}
