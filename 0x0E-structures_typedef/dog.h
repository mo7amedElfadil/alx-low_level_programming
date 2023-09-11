#ifndef DOG_H
#define DOG_H
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog;
void print_dog(struct dog *d);
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
