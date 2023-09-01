#include "main.h"

int _isdigit(int c);
int _recursive_add(int argc, char **argv);
int _atoi(char *s);
/**
 * main - Entry point
 * @argc: argument count (number of arguments passed to the program)
 * @argv: argument vector (1-D array of argument strings)
 * Return: Always 0 (Success)
 */
int main(int argc, char **argv)
{
	int i, result = _recursive_add(argc, argv);

	for (i = 1; i < argc; i++)
	{
		if (!(_isdigit(*argv[i])))
		{
			printf("Error\n");
			return (-1);
		}
	}
	printf("%i\n", result);
	return (0);
}

/**
 * _isdigit - checks if a character is a digit
 * @c: Character to be tested
 * Return:  1 (Success)
 *			0 (Failure)
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}

/**
 * _atoi - function that convert a string to an integer.
 *			must account for all - & + signs before the the number
 *			if there are no numbers, return 0
 * @s: pointer to string to be converted into integer
 * Return: 0 (Failure/no numbers)
 *			int convert_out
 */
int _atoi(char *s)
{
	int n_count = 0, i_count = 0, l = 0, convert_out;
	unsigned int convert = 0;


	while (*(s + l) != '\0')
	{
		if (*(s + l) == 45)
			n_count++;
		else if (*(s + l) >= 48 && *(s + l) <= 57)
		{
			i_count++;
			convert *= 10;
			convert += *(s + l) - 48;
		}
		else if (i_count > 0)
			break;
		l++;
	}
	if (i_count == 0)
		return (0);
	else if (n_count % 2 == 1)
	{
		convert_out = convert - 1;

		convert_out *= -1;
		convert_out -= 1;
	}
	else
		convert_out = convert;
	return (convert_out);
}

/**
 * _recursive_add - function that recursively adds integer arguments.
 * @argc: argument count (number of arguments passed to the program)
 * @argv: argument vector (1-D array of argument strings)
 * Return: sum
 */

int _recursive_add(int argc, char **argv)
{
	if (argc == 1)
		return (0);
	return (_atoi(argv[argc - 1]) + _recursive_add(argc - 1, argv));
}
