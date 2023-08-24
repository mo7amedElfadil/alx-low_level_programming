#include "main.h"

/**
 * infinite_add - function that adds two numbers.
 * @n1: first number char type
 * @n2: second number char type
 * @r: buffer that the function uses to store the result char type
 * @size_r: buffer size int type
 * Return: r (result of addition)
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i, j, ir, a, b;
	char *rev1, *rev2;

	i = 0;
	while (n1[i])
		i++;
	j = 0;
	while (n2[j])
		j++;
	if (i >= j)
		ir = i + 1;
	else
		ir = j + 1;
	a = 0;
	while (a <= ir)
	{
		r[a] = '0';
		a++;
	}
	if (ir > size_r)
		return (0);


	while (ir >= 0)
	{

		b = (n1[i] - 48 + n2[j] - 48 + r[ir] - 48) % 10;
		a = (n1[i] - 48 + n2[j] - 48 + r[ir] - 48) / 10;
		r[ir] += b;
		r[ir - 1] += a;
		ir--;
		i--;
		j--;
	}
	return (r);
}
