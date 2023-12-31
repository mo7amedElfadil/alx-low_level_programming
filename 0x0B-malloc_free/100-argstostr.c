#include "main.h"
/**
 * argstostr - concatenates all the arguments of theprogram.
 * @ac: number of args
 * @av: array of args
 * Return: ptr to concatinated args (Success)
 *		   NULL (failure)
 */
char *argstostr(int ac, char **av)
{
	int sum = 0, i, j;
	char *ptr = NULL;

	if (!av || ac == 0)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j])
		{
			sum++;
			j++;
		}
		sum++;
	}
	sum++;
	ptr = (char *)realloc(ptr, sum * sizeof(*ptr));
	if (!ptr)
	{
		free(ptr);
		return (NULL);
	}
	for  (i = 0; i < ac; i++)
	{
		_strcat(ptr, av[i]);
		_strcat(ptr, "\n");
	}
	return (ptr);
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
