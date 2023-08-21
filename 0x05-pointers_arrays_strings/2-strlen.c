#include "main.h"
/**
 * _strlen - function that returns the length of a string.
 * @s: pointer to a string.
 * Return: l == length of string s.
 */
int _strlen(char *s)
{
	int i = 0, l = 0;

	while (*(s + i) != '\0')
	{
		l++;
		i++;
	}
	return (l);
}
