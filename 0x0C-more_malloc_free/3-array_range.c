#include "main.h"
/**
 * array_range - creates an array of integers in a range (inclusive)
 * @min: starting value (inclusive)
 * @max: ending value (inclusive)
 * Return: array of integers (Success)
 *		   NULL (failure) if min > max or malloc fails
 */
int *array_range(int min, int max)
{
	int *arr;
	int i, range = max - min + 1;

	if (min > max)
		return (NULL);
	arr = malloc(sizeof(min) * range);
	if (!arr)
		return (NULL);
	for (i = 0; i < range ; i++)
		arr[i] = min + i;
	return (arr);
}
