#include "main.h"
/**
 * set_string - function that sets the value of a pointer to a char.
 * @s: pointer to pointer to set value of to a char
 * @to: pointer to char that will pointed to
 */
void set_string(char **s, char *to)
{
	*s = to;
}


