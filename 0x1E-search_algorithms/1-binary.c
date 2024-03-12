#include "search_algos.h"
/**
 * binary_search - function that searches for a value in a sorted array of
 *					integers using the Binary search algorithm
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in array
 * @value: Value to search for
 * Return: The index where value is located or -1 if not found
 */
int binary_search(int *array, size_t size, int value)
{
	if (!array || !size)
		return (-1);
	return (binary_search_helper(array, value, 0, size - 1));
}

/**
 * binary_search_helper - function that searches for a value in a sorted array
 *							of integers using the Binary search algorithm
 * @array: Pointer to the first element of the array to search in
 * @value: Value to search for
 * @left: Left index
 * @right: Right index
 * Return: The index where value is located or -1 if not found
 */
int binary_search_helper(int *array, int value, size_t left, size_t right)
{
	size_t mid;

	if (left > right)
		return (-1);
	print_array(array, left, right);
	mid = left + (right - left) / 2;
	if (array[mid] == value)
		return (mid);
	if (array[mid] > value)
		return (binary_search_helper(array, value, left, mid - 1));
	else
		return (binary_search_helper(array, value, mid + 1, right));

}

/**
 * print_array - function that prints an array
 * @array: Pointer to the first element of the array to search in
 * @left: Left index
 * @size: Number of elements in array
 */
void print_array(int *array, size_t left, size_t size)
{
	size_t i;

	printf("Searching in array: ");
	for (i = left; i <= size; i++)
	{
		printf("%d", array[i]);
		if (i < size)
			printf(", ");
	}
	printf("\n");
}
