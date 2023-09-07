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
	unsigned int  size;
	char *ptr;

	if (!s1)
	{
		s1 = malloc(1);
		s1 = "";
	}
	if (!s2)
	{
		s2 = malloc(1);
		s2 = "";
	}

	size = _strlen_recursion(s1) +
		(n <= _strlen_recursion(s2) ? n : _strlen_recursion(s2));
	ptr = malloc(sizeof(*s1) * size + 1);
	if (!ptr)
		return (NULL);

	_strncat(ptr, s1, size);
	_strncat(ptr, s2, n);

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
 * _strncat - function that concatenates two strings
 *			by appending the n bytes from src string to the dest string,
 *			overwriting the terminating null byte (\0)
 *			at the end of dest, and then adds a terminating
 *			null byte unless src contains n or more bytes
 * @src: pointer to the source string.
 * @dest: pointer to the destination string.
 * @n: number of bytes taken from src
 * Return: the pointer to destination.
 */
char *_strncat(char *dest, char *src, unsigned int n)
{
	unsigned int l = 0, m = 0;

	while (*(dest + l))
	{
		l++;
	}
	while (m < n && *(src + m) )
	{
		*(dest + l + m) = *(src + m);
		m++;
	}
	*(dest + l + m) = *(src + m);

	return (dest);
}
