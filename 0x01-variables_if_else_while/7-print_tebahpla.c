#include <stdio.h>
/**
 * main - Entry point
 * Print the lowercase alphabet in reverse
 * Using only putchar
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alphabet;

	alphabet = 'z';
	while (alphabet >= 'a')
	{
		putchar(alphabet);
		alphabet--;
	}
	putchar('\n');
	return (0);
}
