#include "main.h"
#include <stdio.h>
/**
 * _strspn - gets the length of a prefix substring
 * @s: pointer to string
 * @accept: example of prefix substring to test for
 * Return: dest
 */
unsigned int _strspn(char *s, char *accept)
{
	char *ptrs = s;
	char *ptra;

	while (*ptrs)
	{
		for (ptra = accept; *ptra && *ptra != *ptrs; ptra++)
		{
		}
		if (!(*ptra))
			break;
		ptrs++;
	}
	return (ptrs - s);
}


