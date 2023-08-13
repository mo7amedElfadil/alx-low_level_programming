#include <stdio.h>
/**
 * main - Entry point
 * Print all single digit numbers of base 10 from 0
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	i = -1;
	while (i++ < 9)
	{
		printf("%d", i);
	}
	printf("\n");
	return (0);
}
