#include "main.h"
/**
 * _strlen - function that returns the length of a string.
 * @s: pointer to a string.
 * Return: l == length of string s.
 */
int _strlen(char *s)
{
	char *c = s;
	int  l = 0;

	while (*(c) != '\0')
	{
		l++;
		c++;
	}
	return (l);
}
