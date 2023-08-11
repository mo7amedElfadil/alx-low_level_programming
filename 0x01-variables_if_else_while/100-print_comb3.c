#include <stdio.h>
/**
 * main - Entry point
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	int j;

	i = 47;
	while (i++ < 57)
	{	j = i + 1;

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
