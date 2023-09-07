#include "main.h"
/**
 * malloc_checked - allocates memory using malloc
 * @b: sizeof(data_type) * length
 * Return: ptr to the string destination
 */
void *malloc_checked(unsigned int b)
{
	void *c = malloc(b);

	if (!c)
		exit(98);
	else
		return (c);
}
