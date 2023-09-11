#include "main.h"
#include "dog.h"
/**
 * new_dog - creates a new struct instance of dog using the  dog_t type def
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: pointer to dog struct (success)
 *		   NULL (failure)
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	d = malloc(sizeof(dog_t));
	if (!d)
		return (NULL);
	d->name = name;
	d->age = age;
	d->owner = owner;

	return (d);
}
