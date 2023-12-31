#ifndef DOG_H
#define DOG_H
/**
 * struct dog - struct for a dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
/* include libs */
#include <stdio.h>
#include <stdlib.h>

/* function prototypes */
void print_dog(struct dog *d);
void init_dog(struct dog *d, char *name, float age, char *owner);
dog_t *new_dog(char *name, float age, char *owner);
int _strlen_recursion(char *s);
char *_strcpy(char *dest, char *src);
void free_dog(dog_t *d);

#endif

