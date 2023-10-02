#include "main.h"
#include <stdio.h>

/**
 * read_textfile - reads text file and prints to the POSIX standard output.
 * @filename: name of file
 * @letters: no. of letters to read and print
 * Return: 0 if filename is NULL || file cannot be opened or read or
 *			write fails or doesnt write the expected no. of bytes
 *			number of letters read otherwise (success)
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	int len;
	char *s = NULL;

	fd = open(filename, O_RDONLY);
	if (fd > 0)
	{
		s = malloc(sizeof(*s) * letters + 1);
		if (s)
		{
			len = read(fd, s, letters);
			if (len <= 0)
			{
				close(fd), free(s);
				return (0);
			}
			write(STDOUT_FILENO, s, len);
			close(fd), free(s);
			return (len);
		}
	}

	return (0);


}
/**
 * _strlen - function that returns the length of a string.
 * @s: pointer to a string.
 * Return: length of string s.
 */
int _strlen(char *s)
{
	int  l = 0;

	while (s[l])
		l++;
	return (l);
}
