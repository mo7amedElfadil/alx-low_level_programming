#include "main.h"
/**
 * leet - function that encodes a string into 1337.
 *		Letters a and A should be replaced by 4	97 65 52
 *		Letters e and E should be replaced by 3	101 69 51
 *		Letters o and O should be replaced by 0	111 79 48
 *		Letters t and T should be replaced by 7	116 84	55
 *		Letters l and L should be replaced by 1	108 76 49
 *
 *		can only use one if and 2 loops
 *		cant use switch
 * @s: string to encode
 * Return: s
 */
char *leet(char *s)
{
	int i = 0, j;
	char let[10] = {'A', '4', 'E', '3', 'O', '0', 'T', '7', 'L', '1'};

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
