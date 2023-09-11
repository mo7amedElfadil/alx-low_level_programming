#ifndef MAIN_H
#define MAIN_H
int _putchar(char c);
void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);
unsigned int _strlen_recursion(char *s);
char *_strncat(char *dest, char *src, unsigned int n);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
int _isdigit(int c);
void error_resolution(void);
int print_output(char **argv);
void exit_resolution(void);
void print_result(char *result,int len);

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#endif


