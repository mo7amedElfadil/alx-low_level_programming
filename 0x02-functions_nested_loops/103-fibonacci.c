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
	unsigned long a = 1, b = 2, c, d = 2;




	while (i < 48)
	{
		c = a + b;
		if (c > 4000000)
			break;
		if ((c % 2) == 0)
			d += c;
		a = b;
		b = c;
		i++;
	}
	printf("%lu\n", d);
	return (0);
}
