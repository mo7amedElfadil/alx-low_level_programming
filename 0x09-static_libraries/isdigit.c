/**
 * _isdigit - checks if a character is a digit
 * @c: Character to be tested
 * Return:  1 (Success)
 *			0 (Failure)
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
