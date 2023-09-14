#include "variadic_functions.h"

/**
 * print_numbers - prints numbers followed by newline
 * @separator: string to be printed between numbers.
 *				if seperator is null, dont print it
 * @n: number of parameters
 * Return: 0 if n <= 0
 *			sum of all the parameters
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	int i;
	va_list ptr;



	va_start(ptr, n);
	for (i = 0; i < (int)n; i++)
	{
		printf("%d%s", va_arg(ptr, int),
			((i != (int)(n - 1) && separator) ?
			 separator : ""));
	}

	va_end(ptr);
	printf("\n");

}
