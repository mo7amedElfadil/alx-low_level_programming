#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * @argc: argument counter
 * @argv: argument vector
 * Return: Always 0 (Success)
 */
int main(int argc, char **argv)
{

	int i, n;
	int (*main_ptr)(int, char **) = main;
	unsigned char *optcodes = (unsigned char *)main_ptr;

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
		printf("%02x", optcodes[i]);
		if (i < n - 1)
			putchar(' ');
	}
	putchar('\n');

	return (0);
}
