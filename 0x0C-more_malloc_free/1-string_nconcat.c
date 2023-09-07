#include "main.h"
/**
 * string_nconcat - concatenates two strings.
 * @s1: first string to concatenate
 * @s2: second string to concatenate
 * @n: first n bytes of s2 to be concatenated
 * Return: ptr to concatinated (Success)
 *		   NULL (failure)
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int  size, i;
	char *ptr = NULL;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";
	n = (n < _strlen_recursion(s2) ? n : _strlen_recursion(s2));
	size = 1 + _strlen_recursion(s1) + n;
	ptr =	malloc_checked(size);
	if (!ptr)
		return (NULL);
	for (i = 0; i < size - 1; i++)
	{
		if (i < size - n - 1)
			ptr[i] = s1[i];
		else
			ptr[i] = s2[i - (size - n - 1)];
	}
		ptr[i] = 0;
	return (ptr);
}

/**
 * _strlen_recursion - returns the length of a string
 * @s: string find length of
 * Return: length of string
 */
unsigned int _strlen_recursion(char *s)
{
	if (!(*s))
		return (0);
	return (1 + _strlen_recursion(s + 1));

}
/**
 * malloc_checked - allocates memory using malloc
 * @b: sizeof(data_type) * length
 * Return: ptr to the string destination
 */
void *malloc_checked(unsigned int b)
{
	void *c = malloc(b);

	if (!c)
		exit(98);
	else
		return (c);
}
