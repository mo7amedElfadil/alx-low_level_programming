#ifndef FUNC_H
#define FUNC_H
/* library Inclusions */
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/* Function prototypes */
int _putchar(char c);
void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
int int_index(int *array, int size, int (*cmp)(int));

#endif


