#include "main.h"
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
	while (l < n)
	{
		*(dest + l) = '\0';
		l++;
	}
	return (dest);
}
