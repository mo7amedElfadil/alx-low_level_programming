#include <ctype.h>
/**
 * _islower - checks for lowercase characters.
 * @c: character to test if is lowercase
 * Return: 1 (Success if character is lowercase)
 *		   0 (Failure if character is not lowercase)
 */
int _islower(int c)
{
	if (islower(c))
		return (1);
	return (0);
}
