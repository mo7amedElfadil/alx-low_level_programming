#include "main.h"
/**
 * create_array - creates an array of chars, initialized with a specific char
 * @size: number of characters/size of array to be created
 * @c: character to initialize the array with
 * Return: array of characters (Success)
 *		   NULL (failure)
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	arr = malloc(size * sizeof(c));
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		arr[i] = c;
	/* free(arr); */


	return (arr);
}
