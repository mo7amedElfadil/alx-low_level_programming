#include "main.h"
/**
 * get_endianness - checks endianness of the system
 * Return: 1 if little endianness
 *			 0 if big endianness
 */
int get_endianness(void)
{
	int n = 1;

	if (*(char *)&n)
		return (1);
	return (0);
}
