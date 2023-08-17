#include <stdio.h>
/**
 * _isupper - checks if a character is uppercase
 *
 * Return: Always 0 (Success)
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
