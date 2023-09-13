#include "function_pointers.h"
/**
 * int_index - searches for an integer
 * @array: array to be maniupulated
 * @size: size of array
 * @cmp: pointer to function that compares values
 * Return: -1 (failure) no element match i.e. cmp returned (0)
 *						size <= 0
 *			index of the first element matched
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (!array || !*cmp || size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
