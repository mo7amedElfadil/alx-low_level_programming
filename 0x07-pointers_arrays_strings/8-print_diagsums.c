#include "main.h"
#include <stdio.h>
/**
 * print_diagsums  - prints the sum of the 2 diagonals of a
 *					 square matrix of integers
 * @a: pointer to 2D array containing the board
 * @size: size of array
 */
void print_diagsums(int *a, int size)
{
	int r, c, sum1 = 0, sum2 = 0;
	int *ptra;

	for (r = 0; r < size; r++)
	{
		ptra = a;
		for (c = 0; c < size; c++, ptra++)
		{
			if (r == c)
				sum1 += *ptra;
			if (r + c == size - 1)
				sum2 += *ptra;
		}
		a += size;
	}
	printf("%d, %d\n", sum1, sum2);
}


