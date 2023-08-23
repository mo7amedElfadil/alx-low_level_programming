#include "main.h"
/**
 * string_toupper - convert all lowercase letters of a
 *				string to uppercase
 *
 * Return: Always 0 (Success)
 */
char *string_toupper(char *s)
{
	while ( *s != '\0')
	{
		if (*s >= 97 && *s <=122)
			*s-= 32;

		*s++;
	}


	return (s);
}
