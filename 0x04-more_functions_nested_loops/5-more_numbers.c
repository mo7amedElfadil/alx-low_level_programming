#include "main.h"
/**
 * more_numbers - 10 times the numbers, from 0 to 14, followed by a new line.
 */
void more_numbers(void)
{
	int c, i;

	for (i = 0; i < 10; i++)
	{
		for (c = 0; c <= 14; c++)
		{
			if (c >= 10)
				_putchar(c / 10 + 48);
			_putchar(c % 10 + 48);
		}
		_putchar(10);
	}
}
