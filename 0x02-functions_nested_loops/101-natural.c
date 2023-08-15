#include "main.h"
#include <stdio.h>
/**
 * naturals - computes and prints the sum of all multiples of
 *			  3 or 5 below 1024 exclusive
 */
void naturals(void)
{
	int i=0;
	int n=0;

	while (i < 1024)
	{
		if ((i % 3) == 0 || (i % 5) == 0)
		{
			n+=i;
		}
		i++;
	}
	printf("%d\n", n);
}
