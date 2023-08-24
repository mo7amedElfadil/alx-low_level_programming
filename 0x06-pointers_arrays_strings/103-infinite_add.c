#include "main.h"

/**
 * rev_string - function that reverses a string.
 * @s: pointer to a string.
 * @l: length of string
 */

void rev_string(char *s, int l)
{
	int j = 0;
	char temp;

	for (j = 0; j <= l / 2; j++)
	{
		temp = s[j];
		s[j] = s[l - j];
		s[l - j] = temp;
	}
}

/**
 * infinite_add - function that adds two numbers.
 * @n1: first number char type
 * @n2: second number char type
 * @r: buffer that the function uses to store the result char type
 * @size_r: buffer size int type
 * description: 1st couple of while loops to set ptrs to the end
 *				of the strings
 *				The 3rd loop is if both numbers still have digits
 *				the 4th loop is if only n1 still has digits
 *				the 5th loop is if only n2 still has digits
 *
 * Return: r (result of addition)
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i = 0, carry = 0;
	char *p1 = n1, *p2 = n2;

	while (*p1)
		p1++;
	while (*p2)
		p2++;
	size_r--;
	p1--;
	p2--;
	r[size_r] = 0;
	i = 0;
	while (p1 != n1 - 1 && p2 != n2 - 1)
	{
		r[i] = *p1 + *p2 - '0' + carry;
		carry = 0;
		if (r[i] > '9')
		{
			r[i] -= 10;
			carry = 1;
		}
		i++;
		p1--;
		p2--;
		if (size_r == i && (p1 != n1 - 1 || p2 != n2 - 1 || carry == 1))
			return (0);
	}
	while (p1 != n1 - 1)
	{
		r[i] =	*p1 + carry;
		carry = 0;
		if (r[i] > '9')
		{
			r[i] -= 10;
			carry = 1;
		}
		i++;
		p1--;
		if (size_r == i && (p1 != n1 - 1 || carry == 1))
			return (0);
	}
		while (p2 != n2 - 1)
	{
		r[i] = *p2 + carry;
		carry = 0;
		if (r[i] > '9')
		{
			r[i] -= 10;
			carry = 1;
		}
		else
			r[i - 1] = 0;
		i++;
		p2--;
		if (size_r == i && (p2 != n2 - 1 || carry == 1))
			return (0);
	}
	if (carry == 1 && size_r >= i)
	{
		carry = 0;
		r[i] = '1';
		r[i + 1] = 0;
	}
	rev_string(r, i);
	return (r);
}
