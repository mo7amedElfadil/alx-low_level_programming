#include <stdio.h>
/**
 * is_prime - determines if a number is prime
 * @p: integer parameter of is_prime to be tested
 * Return: 0 (Failure)
 *		   1 (Success)
 */

int is_prime(int p)
{
	int i;

	for (i = 2 ; i <= p - 1 ; i++)
	{
		if (p % i == 0)
			return (0);
	}
	return (1);
}



/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long x = 612852475143, i = 2;

	while (i <= x / i)
	{
		if (is_prime(i) == 1)
		{
			if (x % i == 0)
			{
				x /= i;
				continue;
			}
		}
		i++;
	}
	if (i > x)
		x = i;
	printf("%lu\n", x);

	return (0);
}


