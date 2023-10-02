#include "main.h"


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
			if (len == -1)
			{
				close_free(ff, ft, buf);
				error_handle(98, av[1]);
				return (0);
			}
			if (write(ft, buf, len) == -1)
				error_handle(99, av[2]);

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
	if (*ff == -1)
	{
		error_handle(98, file_from);
	}

	*ft = open(file_to, O_WRONLY | O_APPEND | O_CREAT | O_TRUNC,
			S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);

	if (*ft == -1)
	{
		error_handle(99, file_to);
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


	ff = close(ff);
	if (ff == -1)
	{
		free(buf);
		dprintf(STDERR_FILENO, "Error: Can't close fd FD_VALUE %i\n", ff);
		exit(100);
	}

	ft = close(ft);
	if (ft == -1)
	{
		free(buf);
		dprintf(STDERR_FILENO, "Error: Can't close fd FD_VALUE %i\n", ft);
		exit(100);
	}

	free(buf);


}

/**
 * error_handle - handles errors for read and write
 * @err: error code
 * @file_name: name of file
 */
void error_handle(int err, char *file_name)
{
	switch (err)
	{
	case 98:
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_name);
		exit(err);
		break;
	case 99:
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_name);
		exit(err);
		break;
	}
}
