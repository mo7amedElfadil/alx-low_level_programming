#include "main.h"
/**
 * leet - function that encodes a string into 1337.
 * @s: string to encode
 * Return: pointer to s
 */
char *leet(char *s)
{
	int i = 0, j = -1;
	int let[10] = {65, 52, 69, 51, 79, 48, 84, 55, 76, 49};

	while (*(s + i) != '\0')
	{
		j = 0;
		while (j < 10)
		{
			if (*(s + i) == let[j] || *(s + i) - 32 == let[j])
				*(s + i) = let[j + 1];
			j += 2;
		}
		i++;
	}
	return (s);
}
