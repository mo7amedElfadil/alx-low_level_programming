#include <stdio.h>
/**
 * main - Entry point
 *
 *Return: Always 0 (Success)
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
