#include <stdio.h>
/**
 * main - Entry point
 * Print all possible combinations of single-digit no.s in ascending order
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	i = 47;
	while (i++ < 57)
	{
		putchar(i);
		if (i < 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
