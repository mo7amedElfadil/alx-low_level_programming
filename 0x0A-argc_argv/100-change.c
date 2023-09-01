#include "main.h"

int _atoi(char *s);
int coins(char **argv);
/**
 * main - Entry point
 * @argc: argument count (number of arguments passed to the program)
 * @argv: argument vector (1-D array of argument strings)
 * Return: Always 0 (Success)
 */
int main(int argc, char **argv)
{
	((argc > 1) ? printf("%i\n", coins(argv)) : printf("Error\n"));
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
 * coins - finds minimum number of coins to make change for
 *			an amount of money.
 * @argv: argument vector (1-D array of argument strings)
 * Return: number of coins 'count'
 */
int coins(char **argv)
{
	int i, count = 0, money = _atoi(argv[1]);
	int c[5] = {25, 10, 5, 2, 1};

	for (i = 0; i < 5; i++)
	{
		if (money >= c[i])
			count += money / c[i];
		money %= c[i];
	}

	return (count);
}
