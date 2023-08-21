#include "main.h"
#include <stdio.h>
/**
 * _atoi - function that convert a string to an integer.
 *			must account for all - & + signs before the the number
 *			if there are no numbers, return 0
 * @s: pointer to string to be converted into integer
 * Return: 0 (Failure/no numbers)
 *			int convert
 */
int _atoi(char *s)
{
	int n_count, p_count, i_count, l = 0;
	int convert = 0;


	while (*(s + l) != '\0')
	{
		if (*(s + l) == '-')
			n_count++;
		else if (*(s + l) == '+')
			p_count++;
		else if (*(s + l) >= 48 && *(s + l) <= 57)
		{
			i_count++;
			convert *= 10;
			convert += *(s + l) - 48;
		}
		l++;
	}
	if (i_count == 0)
		return (0);
	else if (n_count % 2 == 1)
		convert *= -1;

	return (convert);
}
