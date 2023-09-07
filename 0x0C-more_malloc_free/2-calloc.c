#include "main.h"
/**
 * _calloc - allocates memory for an array using malloc.
 * @nmemb: number of elements in the array
 * @size: size of the bytes per member (sizeof datatype)
 * Return: array of integers (Success)
 *		   NULL (failure) if nmemb or size is zero or if malloc fails
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *arr;
	unsigned int i;

	arr = malloc(size * nmemb);
	if (!arr || size == 0 || nmemb == 0)
		return (NULL);
	for (i = 0;i < nmemb * size; i++)
		arr[i] = 0;
	return (arr);
}
