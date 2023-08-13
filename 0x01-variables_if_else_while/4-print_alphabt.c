#include <stdio.h>
/**
 * main - Entry point
 * Print alphabet in lowercase except for q and e
 * Only putchar
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alphabet;

	alphabet = 'a';
	while (alphabet <= 'z')
	{
		if (alphabet == 'e' || alphabet == 'q')
		{
			alphabet++;
		}
		else
		{
		putchar(alphabet);
		alphabet++;
		}
	}
	putchar('\n');
	return (0);
}
