#include "main.h"
#include <stdio.h>
/**
 * _strchr - locates a character in a string
 * @s: pointer to string
 * @c: character to search for
 * Return: dest
 */
char *_strchr(char *s, char c)
{
	char *ptr = s;

	for (; *ptr && *ptr != c; ptr++)
	{

	}
	if (*ptr == c)
		return (ptr);
	else
		return (NULL);
}


