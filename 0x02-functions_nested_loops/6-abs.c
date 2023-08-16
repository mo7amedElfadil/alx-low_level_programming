#include <stdlib.h>
/**
 * _abs - computes absolute value of an integer
 * @i: integer used for computation
 * Return: Always 0 (Success)
 */
int _abs(int i)
{
	if(i < 0)
		return (-i);
	else
		return i;
}
