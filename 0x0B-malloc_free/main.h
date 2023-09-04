#ifndef MAIN_H
#define MAIN_H
int _putchar(char c);
char *create_array(unsigned int size, char c);
char *_strdup(char *str);
char *str_concat(char *s1, char *s2);
int **alloc_grid(int width, int height);
void free_grid(int **grid, int height);
int _strlen_recursion(char *s);
char *_strncpy(char *dest, char *src, int n);
#endif

#include <stdlib.h>
