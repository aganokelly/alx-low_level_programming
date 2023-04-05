#include "main.h"

/**
 * _length - checks length of a string
 * @s: string
 * Return: length of string
 */

int _length(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _length(s + 1));
}

/**
 * check - finds out if the string is palindrome
 * @i: index
 * @lg: lenth of the string
 * @s: the string
 * Return: 1 if palindrome or 0 if not
 */

int check(int i, int lg, char *s)
{
	if (lg > 0)
	{
		if (s[i] == s[lg])
		{
			return (check(i + 1, lg - 1, s));
		}
		else if (s[i] != s[lg])
		{
			return (0);
		}
		else
		{
			return (1);
		}
	}
	return (1);
}

/**
 * is_palindrome - checks if string is palindrome
 * @s: string
 * Return: 1 if the string is palindrome or 0 if not
 */

int is_palindrome(char *s)
{
	return (check(0, _length(s) - 1, s));
}
