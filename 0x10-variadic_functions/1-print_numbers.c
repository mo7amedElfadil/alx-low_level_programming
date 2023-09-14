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
	unsigned int i;
	va_list ptr;


	if (n <= 0)
	{
		return;
	}

	va_start(ptr, n);
	for (i = 0; i < n; i++)
	{


		printf("%i", va_arg(ptr, int));
		if (i < n - 1 && separator)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ptr);

}
