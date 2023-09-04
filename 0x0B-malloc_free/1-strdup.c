#include "main.h"
/**
 * _strdup - allocate a memory space to a pointer and copy given string param
 * @str: string to initialize the space with
 * Return: ptr to string (Success)
 *		   NULL (failure)
 */
char *_strdup(char *str)
{
	char *ptr;
	int  size;

	size = _strlen_recursion(str);
	printf("%i \n", size);
	ptr = malloc(size * sizeof(*ptr));
	if (ptr == NULL || str == NULL)
		return (NULL);
	ptr = _strncpy(ptr, str, size);

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
 * _strncpy - function that that copies a string
 *			overwriting the terminating null byte (\0)
 *			at the end of dest, and then adds a terminating
 *			null byte unless src contains n or more bytes
 * @src: pointer to the source string.
 * @dest: pointer to the destination string.
 * @n: number of bytes taken from src
 * Return: the pointer to destination.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int l = 0;

	while (l < n && *(src + l) != '\0')
	{
		*(dest + l) = *(src + l);
		l++;
	}
	return (dest);
}
