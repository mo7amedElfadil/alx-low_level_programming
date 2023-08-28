#include "main.h"
/**
 * _memset - fills memory with a constant byte
 * @s: pointer to string buffer
 * @b: constant byte to fill memory with
 * @n: number of bytes of memory to fill
 * Return: Always 0 (Success)
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	char *ptr = s;

	for (i = 0; i < n; i++, ptr++)
	{
		*ptr = b;
	}

	return (s);
}
