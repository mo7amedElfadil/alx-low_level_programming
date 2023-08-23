#include "main.h"
/**
 * string_toupper - convert all lowercase letters of a
 *				string to uppercase
 * @s: string to convert to uppercase
 * Return: Always 0 (Success)
 */
char *string_toupper(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		if (*(s + i) >= 97 && *(s + i) <= 122)
			*(s + i) -= 32;
		i++;
	}


	return (s);
}
