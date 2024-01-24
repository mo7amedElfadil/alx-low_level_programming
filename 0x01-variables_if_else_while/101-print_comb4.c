#include <stdio.h>
/**
 * main - Entry point
 * Print all possible combinations of 3 digits
 * All 3 digits must be different. Print the smallest combination
 * Can only use putchar and no Char vars
 *Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	int j;
	int k;

	i = 47;
	while (i++ < 57)
	{
		j = i + 1;
		while (j <= 57)
		{
			k = j + 1;
			while (k <= 57)
			{
				putchar(i);
				putchar(j);
				putchar(k);
				k++;
				if (i < 55 && j <= 56)
				{
					putchar(',');
					putchar(' ');
				}
			}
			j++;
				}
	}
	putchar('\n');
	return (0);
}
