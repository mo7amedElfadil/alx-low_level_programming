#include <stdio.h>
/**
 * main - Entry point
 * Print the alphabet in lowercase, followed by newline using only putchar
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
	putchar('\n');
	return (0);
}
