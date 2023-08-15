#include "main.h"
/**
 * main - Entry point
 * Prints string _putchar using _putchar function
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c[9] = "_putchar";
	int i;

	i = -1;
	while (i++ < 7)
		_putchar(c[i]);
	_putchar('\n');
	return (0);
}
