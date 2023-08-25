#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char buffer[] = "";

    printf("%s\n", buffer);
	printf("%lu\n", sizeof(buffer));

    printf("---------------------------------\n");
    print_buffer(buffer, sizeof(buffer));
    return (0);
}
