#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <elf.h>

/* structs and macros */
#if defined(__LP64__)
#define ElfW(type) Elf64_ ## type
#else
#define ElfW(type) Elf32_ ## type
#endif


#ifndef BUFF
#define BUFF 1024
#endif

/* Task functions */
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);

/* Utility */

void open_files(char **av, int *ff, int *ft);
void error_handle(int err, char *file_name);
void close_free(int ff, int ft, char *buf);
void elf_error(int err, char *Error, char *file_name);
void open_elf(char **av, int *fp);
void close_elf(int fd);

void read_elf(int fd, ElfW(Ehdr) header, char *file_name);
#endif
