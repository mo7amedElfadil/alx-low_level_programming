#include "main.h"
#include <stdio.h>
/**
 * print_buffer - prints a buffer
 * @b: pointer to the buffer
 * @size: size in bytes of the buffer pointed by b
 */
void print_buffer(char *b, int size)
{
	int i, j, k;

	if (size <= 0)
		printf("\n");
	i = 0, j = 0;
	while (i < size)
	{
		printf("%08x: ", (10 * (i / 10)));
		for (k = 0; k < 10; k += 2)
		{
			if (b[i + k] || i < size - 10)
				printf("%02x%02x ", b[i + k], b[i + k + 1]);
			else
				printf("     ");
		}
		j = 0;
		while (j < 10 && i < size)
		{
			if (b[i] <= 31)
				printf(".");
			else
				printf("%c", b[i]);
			i++, j++;
		}

			printf("\n");
	}
}
