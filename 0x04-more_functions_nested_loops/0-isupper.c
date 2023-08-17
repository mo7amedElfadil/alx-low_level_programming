/**
 * _isupper - checks if a character is uppercase
 * Return:  1 (Success)
 *			0 (Failure)
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
