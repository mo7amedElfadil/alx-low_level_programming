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
char *_strcat(char *dest, char *src);
char *argstostr(int ac, char **av);
char **strtow(char *str);
int word_count(char *str);
char *_strncat(char *dest, char *src, int n);
char ***word_matrix(char *str);
char **extract_sentence(char *str);
char *extract_word(char *str);
int len_sentence(char *str);
int len_word(char *str);
int count_sentences(char *str);
#endif

#include <stdio.h>
#include <stdlib.h>
