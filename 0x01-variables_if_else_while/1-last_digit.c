#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 * Assign a random no. to var n and printf the last digit stored in n
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int n10;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	n10 = n % 10;
	if (n10 > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, n10);
	}
	else if (n10 == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, n10);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, n10);
	}
		return (0);
}
