#include "main.h"
/**
 * reverse_array - function that reverses an array.
 * @a: pointer to an array.
 * @n: number of elements in the array.
 */
void reverse_array(int *a, int n)
{
	int i = 0, temp;


	while (i < n / 2)
	{
		temp = *(a + i);
		*(a + i) = *(a + n - i - 1);
		*(a + n - i - 1) = temp;
		i++;
	}
}
