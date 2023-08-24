#include "main.h"
/**
 * rot13 - function that encodes a string using rot13.
 *
 *		can only use one if and 2 loops
 *		cant use switch
 * @s: string to encode
 * Return: Always 0 (Success)
 */
char *rot13(char *s)
{
	int i = 0;
	char c;

	while (*(s + i) != '\0')
	{
		c = *(s + i);
		if ((c >= 65 && c <= 90 ))
		{
			if (c + 13 > 90 )
				*(s + i) -= 13;
			else
				*(s + i) += 13;
		}
		else if(c >= 97 && c <= 122)
		{
			if (c + 13 > 122 )
				*(s + i) -= 13;
			else
				*(s + i) += 13;
		}
		i++;
	}
	return (s);
}

