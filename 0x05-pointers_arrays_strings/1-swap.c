#include "main.h"
/**
 * swap_int - takes 2 pointers to ints as parameter and
 *				swaps the values they point to.
 * @a: pointer to the first int
 * @b: pointer to the second int
 */
void swap_int(int *a, int *b)
{
	int t = *a;
	*a = *b;
	*b = t;
}
