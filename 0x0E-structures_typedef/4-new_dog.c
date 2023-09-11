#include "main.h"
#include "dog.h"
/**
 * _strlen_recursion - returns the length of a string
 * @s: string find length of
 * Return: length of string
 */
int _strlen_recursion(char *s)
{
	if (!(*s))
		return (0);
	return (1 + _strlen_recursion(s + 1));

}



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
	int len_n, len_o;

	d = malloc(sizeof(dog_t));
	if (!d)
		return (NULL);
	len_n = _strlen_recursion(name) + 1;
	d->name = malloc(sizeof(*name) * len_n);
	if (!d->name)
		{
			free(d);
			return(NULL);
		}
	d->name = name;

	len_o = _strlen_recursion(name) + 1;
	d->owner = malloc(sizeof(*owner) * len_o);
	if (!d->owner)
		{
			free(d->name);
			free(d);
			return(NULL);
		}
	d->owner = owner;
	d->age = age;
	return (d);
}
