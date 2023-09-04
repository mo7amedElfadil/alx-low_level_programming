#include "main.h"
/**
 * str_concat - concatenates two strings.
 * @s1: first string to concatenate
 * @s2: second string to concatenate
 * Return: ptr to concatinated (Success)
 *		   NULL (failure)
 */
char *str_concat(char *s1, char *s2)
{
	char *ptr;
	int  size;

	size = _strlen_recursion(s1);
	size += _strlen_recursion(s2);

	ptr = malloc(size * sizeof(*ptr) + 1);
	if (!ptr)
		return (NULL);

	_strcat(ptr, s1);
	_strcat(ptr, s2);
	return (ptr);
}

/**
 * _strlen_recursion - returns the length of a string
 * @s: string find length of
 * Return: length of string
 */
int _strlen_recursion(char *s)
{
	if (!(*s))
		return (0);
	return (1 + _strlen_recursion(s + 1));

}
/**
 * _strcat - function that concatenates two strings
 *			by appending the src string to the dest string,
 *			overwriting the terminating null byte (\0)
 *			at the end of dest, and then adds a terminating
 *			null byte
 * @src: pointer to the source string.
 * @dest: pointer to the destination string.
 * Return: the pointer to destination.
 */
char *_strcat(char *dest, char *src)
{
	int l = 0, m = 0;

	while (*(dest + l) != '\0')
	{
		l++;
	}
	while (*(src + m) != '\0')
	{
		*(dest + l + m) = *(src + m);
		m++;
	}
	*(dest + l + m) = *(src + m);
	return (dest);
}
