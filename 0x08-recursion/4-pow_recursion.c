#include "main.h"
/**
 * _pow_recursion - returns the value of x to the power of y
 * @x: value of the base number
 * @y: power of the base number
 * Return: -1 when y is negative
 *			x power y otherwise
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
