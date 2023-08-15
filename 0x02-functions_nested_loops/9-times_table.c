#include "main.h"
/**
 * times_table - prints the 9 times table starting with 0
 * Return: Always 0 (Success)
 */
void times_table(void)
{
	int r = 0;

	while (r < 10)
	{
		int c = 0;

		while (c < 10)
		{
			if (c > 0)
			{
				_putchar(' ');
				if ((c * r) < 10)
				{
					_putchar(' ');
				}
			}
			if ((r * c) / 10 > 0)
			{
				_putchar((r * c) / 10 + '0');
			}
			_putchar((r * c) % 10 + '0');
			if (c < 8)
			{
				_putchar(',');
			}
			c++;
		}
		_putchar('\n');
		r++;
	}


}
