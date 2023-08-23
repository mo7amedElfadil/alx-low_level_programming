#include "main.h"
/**
 * cap_string - capitalize all words of a string
 * Separators of words: space, tabulation, new line, ,, ;, ., !, ?, ", (, ), {, and }
 *		32 9 13 44 59 46 33 63 34 40 41 123 125
 * @s: string to capitalize
 * Return: Always 0 (Success)
 */
char *cap_string(char *s)
{
	int i = 0, j;
	int sep[13] ={32, 9, 13, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	while (*(s + i) != '\0')
	{
		if (*(s + i) >= 97 && *(s + i) <= 122 )
		{
			for (j = 0; j < 13; j++)
				if (*(s + i - 1) == sep[j])
					*(s + i) -= 32;
		}
		i++;
	}
	return (s);
}
