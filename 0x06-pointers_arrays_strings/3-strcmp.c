#include "main.h"
/**
 * _strcmp - function that compares 2 strings
 * @s1: pointer to the first string.
 * @s2: pointer to the second string.
 * Return: the result of the comparison.
 */
int _strcmp(char *s1, char *s2)
{
	int l = 0, result = 0;



	while (*(s1 + l) != '\0' && *(s2 + l) != '\0')
	{
		result += *(s1 + l) - *(s2 + l);
			l++;
	}
	return (result);
}
