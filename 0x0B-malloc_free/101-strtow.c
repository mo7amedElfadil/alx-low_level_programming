#include "main.h"
/**
 * strtow - splits a string into words.
 * @str: string to split
 * Return: ptr to array of words (Success)
 *		   NULL (failure)
 */
char **strtow(char *str)
{
	int words, i, l;
	char **ptr = NULL;

	words = word_count(str);
	if (!str || words == 0)
	{
		return (NULL);
	}
	ptr = (char **)malloc((words + 1) * sizeof(*ptr));
	for (i = 0; i < words && *str ; i++)
	{
		for (; *str && *str == ' '; str++)
		{
		}
		if (!*str)
			break;
		l = 0;
		while (str[l] != ' ' && str[l])
		{
			l++;
		}


		ptr[i] = (char *)malloc((l + 1) * sizeof(**ptr));
		if (!ptr[i])
		{
			for (; i >= 0;)
				free(ptr[--i]);
			free(ptr);
			return (NULL);
		}
		_strncat(ptr[i], str, l);
		str += l;
	}

	return (ptr);
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
char *_strncat(char *dest, char *src, int n)
{
	int l = 0, m = 0;

	while (*(dest + l) != '\0')
	{
		l++;
	}
	while (m < n && *(src + m) != '\0')
	{
		*(dest + l + m) = *(src + m);
		m++;
	}
	return (dest);
}

/**
 * word_count - function that counts number of words in a string,
 * @str: pointer to the string.
 * Return: the number of words.
 */

int word_count(char *str)
{
	int i, n;

	for (i = 0; str[i]; i++)
	{
		if (str[i] == ' ' || !str[i + 1])
		{
			if (str[i + 1] != ' ')
				n++;
		}

	}
	return (n);
}


