#include "main.h"
#include <stdio.h>
/**
 * main - entrypoint. computes and prints the first
 *		  98 fibonacci numbers starting with 1 & 2
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 0;
	unsigned long a = 1, b = 2, c;
	unsigned long a1, a2, b1, b2, c1, c2;

	printf("%lu", a);
	printf(", %lu", b);
	while (i < 90)
	{
		c = a + b;
		printf(", %lu", c);
		a = b;
		b = c;
		i++;
	}
	a1 = a / 10000000000;
	a2 = a % 10000000000;
	b1 = b / 10000000000;
	b2 = b % 10000000000;
	while (i < 96)
	{
		c1 = a1 + b1;
		c2 = a2 + b2;
		if ((a2 + b2) > 9999999999)
		{
			c1 += 1;
			c2 %= 10000000000;
		}
		printf(", %lu%lu", c1, c2);
		a1 = b1;
		a2 = b2;
		b1 = c1;
		b2 = c2;
		i++;
	}
	printf("\n");
	return (0);
}
