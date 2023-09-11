#include "main.h"
#include "dog.h"

/**
 * free_dog - frees dog structs from memory
 * @d: dog struct of type dog_t
 */
void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}
