#include "main.h"
#include <stdio.h>
/**
 * _strpbrk - searches a string for any of a set of bytes
 *			  locates the first occurence in string s of
 *			  any of the bytes in string accept
 * @s: pointer to string
 * @accept: example of prefix substring to test for
 * Return: ptr to byte in s
 */
char *_strpbrk(char *s, char *accept)
{
	char *ptrs = s;
	char *ptra;

	while (*ptrs)
	{
		for (ptra = accept; *ptra && *ptra != *ptrs; ptra++)
		{
		}
		if (*ptra == *ptrs)
			break;
		ptrs++;
	}
	if (*ptrs)
		return (ptrs);
	else
		return (NULL);
}


