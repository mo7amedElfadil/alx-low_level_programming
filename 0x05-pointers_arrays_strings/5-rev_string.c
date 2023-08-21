#include "main.h"
/**
 * rev_string - function that reverses a string.
 * @s: pointer to a string.
 */
void rev_string(char *s)
{
	int i = 0, l = 0;
	char temp;

	while (*(s + l) != '\0')
	{
		l++;
	}

	while (i < l / 2)
	{
		temp = *(s + i);
		*(s + i) = *(s + l - i - 1);
		*(s + l - i - 1) = temp;
		i++;
	}
}
