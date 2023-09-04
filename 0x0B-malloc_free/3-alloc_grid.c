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

	arr = malloc(height * width * sizeof(int));
	if (!arr)
	{
		free(arr);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		arr[i] = realloc(arr[i], width *  sizeof(int));
		if (!arr[i] || !arr)
		{
			free(arr);
			return (NULL);
		}
	}


	return (arr);
}
