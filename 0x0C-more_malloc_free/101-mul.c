#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char **argv)
{
	int i, j;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	for (i = 1; i < argc ; i++)
	{
		for (j = 0; argv[i][j]; j++)
		{
			if (!(_isdigit(argv[i][j])))
			{
				printf("Error\n");
				exit(98);
			}
		}
	}

	return (0);
}
