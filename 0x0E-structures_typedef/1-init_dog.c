#include "main.h"
#include "dog.h"
/**
 * init_dog - intitialize a variable of type struct dog
 * @d: pointer to struct variable
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
