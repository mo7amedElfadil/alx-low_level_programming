#include "main.h"
/**
 * main - Entry point
 * @argc: argument count (number of arguments passed to the program)
 * @argv: argument vector (1-D array of argument strings)
 * Return: Always 0 (Success)
 */
int main(int argc, char **argv)
{
	(void)argv;
	printf("%i\n", --argc);

	return (0);
}
