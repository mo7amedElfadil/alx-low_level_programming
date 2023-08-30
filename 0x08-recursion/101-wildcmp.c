#include "main.h"
/**
 * wildcmp -  that compares two strings
 * @s1: first string
 * @s2: second string
 * Return: 1 if the strings can be considered identical
 *		   0 otherwise
 */
int wildcmp(char *s1, char *s2)
{
	if ((*s1 == *s2 && !(*s2)))
		return (1);
	else if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));
	else if (*s2 == '*')
	{
		if (*(s2 + 1) == '*')
			return (wildcmp(s1, s2 + 1));
		if (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2))
			return (1);
	}
	else if (*s1 && *(s2 - 1) == '*')
		return (wildcmp(s1 + 1, s2));

	return (0);
}


