#include "search_algos.h"
/**
 * exponential_search - searches for a value in a sorted array of integers
 *						using the Exponential search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 * Return: index where value is located, -1 if not found
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t i = 1, start, end;

	if (!array || !size)
		return (-1);
	if (array[0] == value)
		return (0);
	while (i < size && array[i] <= value)
	{
		printf("Value checked array[%lu] = [%i]\n", i, array[i]);
		i *= 2;
	}
	start = i / 2;
	end =  i >= size ? size - 1 : i;
	printf("Value found between indexes [%lu] and [%lu]\n", start, end);
	return (binary_search_helper(array, value, start, end));


	return (-1);
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
	if (array[left] == value)
		return (left);
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
