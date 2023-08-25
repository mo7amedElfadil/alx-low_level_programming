#include "main.h"
#include <stdio.h>
/**
 * print_buffer - prints a buffer
 * @b: pointer to the buffer
 * @size: size in bytes of the buffer pointed by b
 */
void print_buffer(char *b, int size)
{
	int i, j, k, l = 0;

	while (b[l])
		l++;

	if (size <= 0 || l == 0)
	{
		printf("\n");
		size = l;
	}
	i = 0, j = 0;
	while (i < size && size > 0)
	{
		printf("%08x: ", i);
		for (k = 0; k < 10; k++)
		{
			if (b[i + k] || i + k < size)
			{
				printf("%02x", b[i + k]);
			}
			else
				printf("  ");
			if (k % 2 == 1)
				printf(" ");
		}
		j = 0;
		while (j < 10 && i < size)
		{
			if (b[i] <= 31 || b[i] == 127)
				printf(".");
			else
				printf("%c", b[i]);
			i++, j++;
		}
			printf("\n");
	}
}
