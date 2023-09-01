#include "main.h"
/**
 * _memcpy - copies memory area
 * @dest: pointer to destination string buffer
 * @src: pointer to source string buffer
 * @n: number of bytes of memory to fill
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	char *ptrs = src;
	char *ptrd = dest;

	for (i = 0; i < n; i++, ptrs++, ptrd++)
	{
		*ptrd = *ptrs;
	}

	return (dest);
}


