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
	unsigned char *a = (unsigned char *) s1, *b = (unsigned char *) s2;


	while (*(a + l) != '\0' && *(b + l) != '\0')
	{
		result += *(a + l) - *(b + l);
			l++;
			if (*(a + l) != *(b + l))
				break;
	}
	return (result);
}
