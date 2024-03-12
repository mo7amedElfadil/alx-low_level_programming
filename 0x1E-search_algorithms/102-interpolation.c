#include "search_algos.h"
/**
 * interpolation_search - function that searches for a value in a sorted array
 * of integers using the Interpolation search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: first index of value or -1
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t  low = 0, high = (int)size - 1;

	if (!array || !size)
		return (-1);

	return (interpolation_search_helper(array, low, high, value));


}

/**
 * interpolation_search_helper - function that searches for a value in a sorted
 * array of integers using the Interpolation search algorithm
 * @array: pointer to the first element of the array to search in
 * @low: index to start searching
 * @high: index to end searching
 * @value: value to search for
 * Return: first index of value or -1
 */
int interpolation_search_helper(int *array, size_t low, size_t high, int value)
{
	size_t pos;

	pos = low + (((double)(high - low) / (array[high] - array[low]))
					* (value - array[low]));
	if (low > high || pos < low || pos > high)
	{
		printf("Value checked array[%lu] is out of range\n", pos);
		return (-1);
	}
	printf("Value checked array[%lu] = [%i]\n", pos, array[pos]);
	if (array[pos] > value)
		return (interpolation_search_helper(array, low, pos - 1, value));
	else if (array[pos] < value)
		return (interpolation_search_helper(array, pos + 1, high, value));

	if (array[pos] == value)
		return (pos);
	return (-1);
}
