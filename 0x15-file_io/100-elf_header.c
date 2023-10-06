#include "main.h"
#include <elf.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

/**
 * main - elf_header elf_filename
 *		displays the information contained in the
 *		ELF header at the start of an ELF file.
 * @ac: argument counter
 * @av: arg vector
 * Return: (0)
 */
int main(int ac, char *av[])
{
	int i = 0, x = 0;
	char *s, *p;
	FILE *f;

	s = malloc(1024), p = malloc(1024);
	if (ac != 2)
	{
		elf_error(98,
				"Error! Usage: elf_header elf_filename\n",
				av[0]);
	}
	s[0] = 0, strcat(s, "readelf -h ");
	strcat(s, av[1]), strcat(s, " > elf"), system(s);
	f = fopen("elf", "r");
	while (fgets(s, 512, f) && i < 8)
	{
		if (i == 1)
		{
			while (s[x])
				x++;
			s[x - 2] = '\n', s[x - 1] = 0;
		}
		printf("%s", s);
		i++;
	}
	while (fgets(p, 512, f) && i < 8)
		i++;
	fgets(s, 512, f);
	printf("%s", s);

	free(s), free(p);
	fclose(f);
	if (i == 0)
		exit(98);
	return (0);
}


/**
 * elf_error - handles errors for elf file
 * @err: error code
 * @Error: Error string
 * @file_name: name of file
 */
void elf_error(int err, char *Error, char *file_name)
{
	(void)file_name;
	dprintf(STDERR_FILENO, "%s %s\n", Error, file_name);
	exit(err);
}

/**
 * open_elf - open elf file
 * @av: argument vector
 * @fd: fd for file_from
 */

