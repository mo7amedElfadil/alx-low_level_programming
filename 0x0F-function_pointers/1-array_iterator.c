#include "function_pointers.h"
/**
 * array_iterator - executes a function given as param
 *					on each elememt of an array
 * @array: array to be maniupulated
 * @size: size of array
 * @action: pointer to function that manipulates array
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (!array || !*action || size == 0)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
