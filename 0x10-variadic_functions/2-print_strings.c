#include "variadic_functions.h"

/**
 * print_strings - prints strings followed by newline
 * @separator: string to be printed between strings.
 *				if seperator is null, dont print it
 * @n: number of parameters
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	int i;
	va_list ptr;
	char *s;



	va_start(ptr, n);
	for (i = 0; i < (int)n; i++)
	{
		s = va_arg(ptr, char *);
		printf("%s%s", (s ? s : "(nil)"),
			((i != (int)(n - 1) && separator) ?
			 separator : ""));
	}
	va_end(ptr);
	printf("\n");
}
