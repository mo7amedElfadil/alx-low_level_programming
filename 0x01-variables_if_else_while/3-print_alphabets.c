#include <stdio.h>
/**
 * main - Entry point
 * Print alphabet in lowercase and then uppercase, followed by a newline
 * Can only use putchar
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alphabet;

	alphabet = 'a';
	while (alphabet <= 'z')
	{
		putchar(alphabet);
		alphabet++;
	}
	alphabet = 'A';
	while (alphabet <= 'Z')
	{
		putchar(alphabet);
		alphabet++;
	}

	putchar('\n');
	return (0);
}
