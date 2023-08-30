#include "main.h"
#include <stdio.h>
/**
 * _strlen_recursion - returns the length of a string
 * @s: string find length of
 * Return: length of string
 */
int _strlen_recursion(char *s)
{
	if (!(*s))
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 * palindrome - helper function to determines string s is a palindrome
 * @s: string to test if palindrome
 * @t: length of string
 * Return: 1 when s is palindrome
 *		   0 otherwise
 */
int palindrome(char *s, int t)
{
	if (t <= 0)
		return (1);
	if (*s == s[t] && *s)
		return (palindrome(s + 1, t - 2));
	else
		return (0);
}

/**
 * is_palindrome - determines if string s is a palindrome
 * @s: string to test if palindrome
 * Return: 1 when s is palindrome
 *		   0 otherwise
 */
int is_palindrome(char *s)
{
	int t = _strlen_recursion(s) - 1;

	return (palindrome(s, t));
}


