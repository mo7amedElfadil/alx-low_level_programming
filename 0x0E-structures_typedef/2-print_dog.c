#include "main.h"
#include "dog.h"
/**
 * print_dog - print struct dog
 * @d: pointer to struct variable
 */
void print_dog(struct dog *d)
{
	char *nil = "(nil)";

	if (d)
	{
		printf("Name: %s\n", (d->name ? d->name : nil));
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", (d->owner ? d->owner : nil));
	}
}
