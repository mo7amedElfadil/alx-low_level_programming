#include "search_algos.h"

/**
 * linear_search - function that searches for a value in an array of integers
 *					using the Linear search algorithm
 * @array: Pointer to the first element of the array to search in
 * @size: The number of elements in array
 * @value: The value to search for
 * Return: The first index where value is located
 *			or -1 if value is not present
 */
int linear_search(int *array, size_t size, int value)
{
	int i;

	if (!array || !size)
		return (-1);

	for (i = 0; i < (int)size; i++)
	{
		printf("Value checked array[%i] = [%i]\n", i, array[i]);
		if (array[i] == value)
			break;
	}
	if (i >= (int)size)
		return (-1);
	return (i);
}
