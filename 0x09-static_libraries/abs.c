#include <stdlib.h>
/**
 * _abs - computes absolute value of an integer
 * @i: integer used for computation
 * Return: Always 0 (Success)
 */
int _abs(int n)
{
	if (n < 0)
		return (-n);
	else
		return (n);
}
