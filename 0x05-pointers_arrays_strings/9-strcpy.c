#include "main.h"
/**
 * _strcpy - function that copies the string pointed to by src,
 *				including the terminating null byte (\0),
 *				to the buffer pointed to by dest.
 * @src: pointer to the source string.
 * @dest: pointer to the destination string.
 * Return: the pointer to destination.
 */
char *_strcpy(char *dest, char *src)
{
	int l = 0;


	while (*(src + l) != '\0')
	{
		*(dest + l) = *(src + l);
		l++;
	}
	*(dest + l) = *(src + l);

	return (dest);
}
