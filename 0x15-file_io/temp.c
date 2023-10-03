#include "main.h"
#include <elf.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
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
	char *s = malloc(1024);
	char *p = malloc(1024);
	int fd = 0, i;
	FILE *f;

	if (ac != 2)
	{
		elf_error(98,
				"Error! Usage: elf_header elf_filename\n",
				av[0]);
	}
	s[0] = 0;
	strcat(s, "readelf -h ");
	strcat(s, av[1]);
	strcat(s, " > elf");
	system(s);
	/* fd = open("elf", "r"); */
	f = fopen("elf", "r");
	/* read(fd, s, 1024); */
	while(fgets(s, 512, f) && i < 8)
	{
		printf("%s", s);
		i++;
	}
	while(fgets(p, 512, f) && i < 8)
	{
		i++;
	}
	/* lseek(f,  strlen(p), SEEK_CUR); */
	fgets(s,512,f);
	printf("%s", s);

	free(s);
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
