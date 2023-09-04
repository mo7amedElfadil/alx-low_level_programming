#include "main.h"
/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: width of array (column)
 * @height: height of array (row)
 * Return: array of integers (Success)
 *		   NULL (failure)
 */
int **alloc_grid(int width, int height)
{
	int **arr;
	int i;

	if (width <= 0 || height <= 0)
		return (NULL);
	arr = (int **)calloc(height, sizeof(int *));
	if (!arr)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		arr[i] = (int *)calloc(width, sizeof(int));
		if (!arr[i])
		{
			for (i = width; i >= 0; i--)
				free(arr[i]);
			free(arr);
			return (NULL);
		}
	}


	return (arr);
}
