#include "main.h"
#include <stdio.h>
/**
 * main - entrypoint. computes and prints the first
 *		  50 fibonacci numbers starting with 1 & 2
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 0;
	unsigned long a = 1, b = 2, c;

	printf("%lu", a);
	printf(", %lu", b);


	while (i < 48)
	{
		c = a + b;
		printf(", %lu", c);
		a = b;
		b = c;


		i++;
	}
	printf("\n");
	return (0);
}
