#include "main.h"
#include <stdio.h>
/**
 * _strstr - searches a string for a substring
 *			 locates the first occurence of substring needle
 *			 in string haystack
 * @haystack: pointer to string
 * @needle: pointer of substring
 * Return: ptr to location of substring or
 *		   NULL if substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	int i;
	char *ptrh = haystack;
	char *ptrn;

	while (*ptrh)
	{
		ptrn = needle;
		if (*ptrn == *ptrh)
		{
			for (i = 0; *(ptrh + i) == *(ptrn + i)  && *(ptrh + i) ; i++)
			{
			}
			if (!(*(ptrh + i)))
				break;
		}
		ptrh++;
	}
	if (*(ptrh + i - 1) && *ptrh && *ptrn)
		return (ptrh);
	else
		return (NULL);
}


