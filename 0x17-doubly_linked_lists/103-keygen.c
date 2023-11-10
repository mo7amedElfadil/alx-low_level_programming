#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
/**
 * f1 - f1
 * @arg1: arg1
 * Return: 0
 */
uint64_t f1(int32_t arg1)
{
	return ((arg1 ^ 0x3b) & 0x3f);
}
/**
 * f2_3_4 - f2 + f3 + f4
 * @arg1: arg1
 * @arg2: arg2
 * @a: selector for function
 * Return: 0
 */

uint64_t f2_3_4(char *arg1, int32_t arg2, int a)
{
	int32_t var_10, i;

	if (a == 2)
	{
		var_10 = 0;
		for (i = 0; i < arg2; i = (i + 1))
		{
			var_10 = (var_10 + *(arg1 + i));
		}
		return ((var_10 ^ 0x4f) & 0x3f);
	}
	else if (a == 3)
	{
		var_10 = 1;
		for (i = 0; i < arg2; i = (i + 1))
		{
			var_10 = (*(arg1 + i) * var_10);
		}
		return ((var_10 ^ 0x55) & 0x3f);
	}
	else
	{
		var_10 = *arg1;
		for (i = 0; i < arg2; i = (i + 1))
		{
			if (arg1[i] > var_10)
			{
				var_10 = arg1[i];
			}
		}
		srand((var_10 ^ 0xe));
		return (rand() & 0x3f);
	}
}
/**
 * f5 - f5
 * @arg1: arg1
 * @arg2: arg2
 * Return: 0
 */
uint64_t f5(char *arg1, int32_t arg2)
{
	int32_t var_10 = 0, rax_12, i;

	for (i = 0; i < arg2; i = (i + 1))
	{
		var_10 = (var_10 + (*(arg1 + i) * *(arg1 + i)));
	}
	rax_12 = (var_10 ^ 0xef);
	return (rax_12 & 0x3f);
}
/**
 * f6 - f6
 * @arg1: arg1
 * Return: 0
 */
uint64_t f6(char arg1)
{
	int32_t var_10 = 0, i, rax_3;

	for (i = 0; arg1 > i; i = (i + 1))
	{
		var_10 = rand();
	}
	rax_3 = (var_10 ^ 0xe5);
	return (rax_3 & 0x3f);
}
/**
 * main - entry point
 * @argc: argument counter
 * @argv: argument vector
 * Return: 1
 */

int32_t main(int32_t argc, char **argv)
{
	char *v = "A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";
	char *rax_2 = argv[1];
	int32_t rax_8 = strlen(rax_2);
	int32_t rax_10 = f1(rax_8);
	int32_t rax_16 = f2_3_4(rax_2, rax_8, 2);
	int32_t rax_23 = f2_3_4(rax_2, rax_8, 3);
	int32_t rax_30 = f2_3_4(rax_2, rax_8, 4);
	int32_t rax_37 = f5(rax_2, rax_8);
	int32_t rax_46 = f6(*rax_2);

	(void)argc;
	printf("%c", v[rax_10]);
	printf("%c", v[rax_16]);
	printf("%c", v[rax_23]);
	printf("%c", v[rax_30]);
	printf("%c", v[rax_37]);
	printf("%c\n", v[rax_46]);
	return (1);
}


