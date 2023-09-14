#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * @argc: argument counter
 * @argv: argument vector
 * Return:  0 (Success)
 *			1 (Failure) when incorrect number of args are passed
 *			2 (Failure) when number of bytes to print is negative
 */
int main(int argc, char **argv)
{

	int i, n;

	unsigned char *(main_ptr) = (unsigned char *)main;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	n = atoi(argv[1]);
	if (n < 0)
	{
		printf("Error\n");
		exit(2);
	}
	for (i = 0; i < n; i++)
	{
		printf("%02x", main_ptr[i]);
		if (i < n - 1)
			putchar(' ');
	}
	putchar('\n');

	return (0);
}
