#include <ctype.h>
/**
 * _isalpha - checks for alphabetical characters.
 * @c: character to test if is alphabetical
 * Return: 1 (Success if character is alphabetical)
 *		   0 (Failure if character is not alphabetical)
 */
int _isalpha(int c)
{
	if (isalpha(c))
		return (1);
	return (0);
}
