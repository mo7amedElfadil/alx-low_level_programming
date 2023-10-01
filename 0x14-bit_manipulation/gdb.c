#include <stdio.h>
#include <limits.h>

int add_2_nums(int a, int b)
{
	return a + b;
}

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a = INT_MAX, b = 0;

	printf("The sum is %i\n",add_2_nums(a, b));
	return (0);
}
