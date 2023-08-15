#include "main.h"
/**
 * print_times_table - print the times table  of int n
 * @n: integer to print times table for
 */
void print_times_table(int n)
{
	int r = 0;

	if (n >= 0 && n <= 15)
	{
		while (r <= n)
		{
			int c = 0;

			while (c <= n)
			{
				if (c > 0)
				{
					_putchar(' ');
					if ((c * r) < 100)
						_putchar(' ');
					if ((c * r) < 10)
						_putchar(' ');
				}
				if ((r * c) / 100 > 0)
				{
					_putchar((r * c) / 100 + '0');
					_putchar(((r * c) / 10) % 10 + '0');
				}
				else if ((r * c) / 10 > 0)
				{
					_putchar((r * c) / 10 + '0');
				}
				_putchar((r * c) % 10 + '0');
				if (c < n)
					_putchar(',');
				c++;
			}
			_putchar('\n');
			r++;
		}
	}
}
