#include "main.h"
/**
 * rot13 - function that encodes a string using rot13.
 *
 *		can only use one if and 2 loops
 *		cant use switch
 * @s: string to encode
 * Return: s
 */
char *rot13(char *s)
{
	int i = 0;
	char c;

	while (*(s + i) != '\0')
	{
		c = *(s + i);

		if ((c >= 65 && c <= 90))
		{
			*(s + i) = 65 + ((*(s + i) - 65 + 13) % 26);
			i++;
			continue;
		}
		else if (c >= 97 && c <= 122)
		{
			*(s + i) = 97 + ((*(s + i) - 97 + 13) % 26);
			i++;
			continue;
		}

		i++;
	}
	return (s);
}

