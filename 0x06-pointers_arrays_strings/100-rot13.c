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
	int i = 0,n ;
	char c;

	while (*(s + i) != '\0')
	{


		c = *(s + i);
		n = c - 4;

		if ((c >= 65 && c <= 90 ))
		{
			*(s + i) = 65 + (c - 65) % 13;
			i++;
			continue;
		}


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

