#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point. Generates random valid passwords for
 *		the program 101-crackme.
 * Return: Always 0 (Success)
 */
int main(void)
{
	int sum = 0, byte = 128;
	char c;
	time_t t;
	int max;

	srand((unsigned int) time(&t));
	max = 2772;
	while (sum <= max - byte)
		{	c = rand() % byte;
			putchar(c);
			sum += c;
		}
	putchar(max - sum);
	return (0);
}
