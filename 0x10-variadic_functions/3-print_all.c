#include "variadic_functions.h"

/**
 * print_all - prints anything.
 * @format: list of types of arguments passed to the function
 *
 */
void print_all(const char * const format, ...)
{
	int i, flag;
	va_list ptr;
	char *s;

	va_start(ptr, format);
	i = 0;
	while (format && format[i])
	{
		flag = 1;
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(ptr, int));
				break;
			case 'i':
				printf("%d", va_arg(ptr, int));
				break;
			case 'f':
				printf("%f", va_arg(ptr, double));
				break;
			case 's':
				s = va_arg(ptr, char *);
				printf("%s", (s ? s	: "(nil)"));
				break;
			default:
				flag = 0;
				break;
		}
		if (i < (int)(strlen(format) - 1) && flag)
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(ptr);
}
