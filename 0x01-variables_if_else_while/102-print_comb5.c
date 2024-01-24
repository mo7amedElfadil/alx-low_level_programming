#include <stdio.h>
/**
 * main - Entry point
 * Print all possible combinations of 2 two-digit no.s
 * Must be in ascending order
 * 00 01 and 10 00 are considered the same combination of 0 & 1
 * Only putchar and no char vars
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	int j;

	i = 0;
	while (i <= 99)
	{
		j = i + 1;
		while (j <= 99)
		{
			if (i != j)
			{
				putchar(i / 10 + '0');
				putchar(i % 10 + '0');
				putchar(' ');
				putchar(j / 10 + '0');
				putchar(j % 10 + '0');
				if (!((i == 98) && (j == 99)))
				{
					putchar(',');
					putchar(' ');
				}
			}
			j++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
