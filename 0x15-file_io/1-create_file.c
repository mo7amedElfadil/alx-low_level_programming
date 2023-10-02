#include "main.h"

/**
 * create_file - creates a file.
 *				 file must have those permissions: rw-------
 *				 f the file already exists, do not change the permissions.
 *				 if the file already exists, truncate it
 *				 if text_content is NULL create an empty file
 * @filename: name of file to create.
 * @text_content: null terminated string to write to the file
 * Return: -1 if filename is NULL || file cannot be created or written or
 *			write fails or doesnt write the expected no. of bytes
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int  len = 0;

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND | O_CREAT | O_TRUNC,
			S_IRUSR | S_IWUSR);
	if (fd > 0)
	{
		len = strlen(text_content);
		write(fd, text_content, len);
		close(fd);
		return (1);
	}

	return (-1);

}

