#include "3-calc.h"

/**
 * get_op_func - determines the operation desired by user
 * @s: character to determine operation
 * Return: pointer to operation function
 */

int (*get_op_func(char *s))(int, int)
{
	int i;
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	i = 0;
	while (ops[i].op != NULL)
	{
		if (!strcmp(ops[i].op ,s))
			return (ops[i].f);
		i++;
	}
	return (NULL);
}
