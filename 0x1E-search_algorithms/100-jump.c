#include "search_algos.h"
/**
 * jump_search - searches for a value in a sorted array of integers
 *					using the Jump search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: The index where value is located or -1 if not found
 */
int jump_search(int *array, size_t size, int value)
{
	int jump = sqrt(size), i;

	if (!array || !size)
		return (-1);
	/* && (i + jump) < (int)size */
	for (i = 0; i < (int)size; i += jump)
	{
		printf("Value checked array[%i] = [%i]\n", i, array[i]);
		if (i + jump > (int)size || array[i + jump] >= value)
			return (jump_search_helper(array, i, i + jump, size, value));
	}
	return (-1);
}

/**
 * jump_search_helper - searches for a value in a sorted array of integers
 *						using the Jump search algorithm
 * @array: pointer to the first element of the array to search in
 * @start: index to start searching
 * @end: index to end searching
 * @size: number of elements in array
 * @value: value to search for
 * Return: The index where value is located or -1 if not found
 */

int jump_search_helper(int *array, int start, int end, size_t size, int value)
{
	int i;

	printf("Value found between indexes [%i] and [%i]\n", start, end);
	if (end > (int)size - 1)
		end = (int)size - 1;
	for (i = start; i <= end; i++)
	{
		printf("Value checked array[%i] = [%i]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
