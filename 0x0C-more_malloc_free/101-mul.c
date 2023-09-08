#include "main.h"
/**
 * _strlen_recursion - returns the length of a string
 * @s: string find length of
 * Return: length of string
 */
unsigned int _strlen_recursion(char *s)
{
	if (!(*s))
		return (0);
	return (1 + _strlen_recursion(s + 1));

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
 * reverse_str - function that reverses an array.
 * @a: pointer to an array.
 * @n: number of elements in the array.
 */
void reverse_str(char *a, int n)
{
	int i = 0, temp;


	while (i < n / 2)
	{
		temp = *(a + i);
		*(a + i) = *(a + n - i - 1);
		*(a + n - i - 1) = temp;
		i++;
	}
}
/**
 * arg_test - tests arguments for certain conditions
 *			  1. That 3 arguments were passed (including the name of the file)
 *			  2. that the 2nd and 3rd arguments were all made up of digits
 * @argc: number of arguments.
 * @argv: pointer to argument array.
 */

void arg_test(int argc, char **argv)
{
	int i, j;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	for (i = 1; i < argc ; i++)
	{
		for (j = 0; argv[i][j]; j++)
		{
			if (!(_isdigit(argv[i][j])))
			{
				printf("Error\n");
				exit(98);
			}
		}
	}
}

/**
 * main - Entry point
 * @argc: argument count
 * @argv: argument vector
 * Return: Always 0 (Success)
 */
int main(int argc, char **argv)
{
	char *result = NULL, *x, *y;
	int i, j, k, size1, size2, carry = 0, c2, res, len;

	arg_test(argc, argv);
	x = argv[1], y = argv[2];
	size1 = _strlen_recursion(x);
	size2 = _strlen_recursion(y);
	len = size1 + size2;
	result = malloc(sizeof(char) * len);
	if (!result)
	{
		return (1);
	}
	for (i = 0; i < len; i++)
		result[i] = 0;
	reverse_str(x, size1), reverse_str(y, size2);
	for (i = 0; i < size1; i++)
	{
		carry = 0;
		for (j = 0; j < size2; j++)
		{
			carry += (x[i] - 48) * (y[j] - 48) + result[i + j];
			result[i + j] = carry % 10;
			carry /= 10;
		}
		if (carry > 0)
			result[i + j] += carry;
	}
	reverse_str(result, len - 1);
	for (k = 0; k < len - 1; k++)
		result[k] += 48;
	for (k = 0; k < len; k++)
		putchar(result[k]);
	putchar('\n');
	free(result);
	return (0);
}
