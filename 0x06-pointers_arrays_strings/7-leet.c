#include "main.h"
/**
 * leet - function that encodes a string into 1337.
 * @s: string to encode
 * Return: pointer to s
 */
char *leet(char *s)
{
	int i = 0, j;
	char nums[] = "4433007711";
	char let[] = "aAeEoOtTlL";

	while (s[i] != '\0')
	{
		j = 0;
		while (let[j] != '\0')
		{
			if (s[i] == let[j])
			{
				s[i] = nums[j];
				j++;
				break;
			}
			j++;
		}
		i++;
	}
	return (s);
}
