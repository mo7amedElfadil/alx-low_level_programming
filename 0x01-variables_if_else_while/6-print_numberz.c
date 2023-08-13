#include <stdio.h>
/**
 * main - Entry point
 * Print all single digit numbers of base 10 starting from 0
 * Using only putchar
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	i = 47;
	while (i++ < 57)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
