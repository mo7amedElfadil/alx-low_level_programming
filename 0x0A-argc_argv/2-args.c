#include "main.h"
/**
 * main - Entry point
 * @argc: argument count (number of arguments passed to the program)
 * @argv: argument vector (1-D array of argument strings)
 * Return: Always 0 (Success)
 */
int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
