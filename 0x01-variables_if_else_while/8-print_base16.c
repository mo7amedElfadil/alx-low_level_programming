#include <stdio.h>
/**
 * main - Entry point
 * Print all numbers of base 16 in lowercase
 * Using only putchar
 * Return: Always 0 (Success)
 */
int main(void)
{
	int alphabet;

	alphabet = 48;
	while (alphabet <= 57)
	{
		putchar(alphabet);
		alphabet++;
	}
	alphabet += 39;
	while (alphabet <= 102)
	{
		putchar(alphabet);
		alphabet++;
	}
	putchar('\n');
	return (0);
}
