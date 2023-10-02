#include "main.h"
#include <unistd.h>
/**
 * main - check the code
 * @ac: argument count
 * @av: argument vector, contains:
 *		file_from:	av[1]
 *		file_to:	av[2]
 *
 * Description: copies the content of a file to another file
 *				Usage: cp file_from file_to
 * Return: always (0)
 */
int main(int ac, char **av)
{
	int ff, ft;
	int  len = 0;
	char  *buf;


	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	open_files(av, &ff, &ft);
	buf = malloc(sizeof(*buf) * 1024);
	if (buf)
	{
		do {
			len = read(ff, buf, 1024);
			if (len <= 0)
			{
				close(ff), close(ft), free(buf);
				return (0);
			}
			write(ft, buf, len);
		} while (len == 1024);
	}
	close_free(ff, ft, buf);
	return (0);
}

/**
 * open_files - open files
 * @av: argument vector
 * @ff: fd for file_from
 * @ft: fd for file_to
 */
void open_files(char **av, int *ff, int *ft)
{
	char *file_from = NULL, *file_to = NULL;

	file_from = av[1];
	file_to = av[2];
	*ff = open(file_from, O_RDONLY);
	if (errno == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}

	*ft = open(file_to, O_WRONLY | O_APPEND | O_CREAT | O_TRUNC,
			S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);

	if (errno == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		exit(99);
	}

}

/**
 * close_free - closes files and frees buffer
 * @ff: fd for file_from
 * @ft: fd for file_to
 * @buf: buffer
 */

void close_free(int ff, int ft, char *buf)
{


	close(ff);
	if (errno == -1)
	{
		free(buf);
		dprintf(STDERR_FILENO, "Error: Can't close fd FD_VALUE %i\n", ff);
		exit(100);
	}

	close(ft);
	if (errno == -1)
	{
		free(buf);
		dprintf(STDERR_FILENO, "Error: Can't close fd FD_VALUE %i\n", ft);
		exit(100);
	}

	free(buf);


}
