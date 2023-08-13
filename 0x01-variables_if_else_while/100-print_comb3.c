#include <stdio.h>
/**
 * main - Entry point
 * Print all possible combinations of 2 digits eg. 01, 02, ..., 79, 89
 * where 01 and 10 are considered the same combination
 * Using only putchar and we're not allowed to use any char variable
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	int j;

	i = 47;
	while (i++ < 57)
	{
		j = i + 1;
		while (j <= 57)
		{
			putchar(i);
			putchar(j);
			j++;
			if (i < 56)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
