#include "3-calc.h"
/**
 * main - check the code
 * @argc: arument count
 * @argv: argument vector
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
	int result;
	int (*ptr)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	ptr = (get_op_func)(argv[2]);
	if (!ptr)
	{
		printf("Error\n");
		exit(99);

	}
	if ((!strcmp(argv[2], "/") || !strcmp(argv[2], "%")) && atoi(argv[3]) == 0)
	{
		printf("Error\n");
		exit(100);
	}

	result = ptr(atoi(argv[1]), atoi(argv[3]));
	printf("%d\n", result);
	return (0);
}


