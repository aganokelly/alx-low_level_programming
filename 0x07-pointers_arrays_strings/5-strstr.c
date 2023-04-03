#include "main.h"

/**
 * _strstr - finds the first occurence of the sub string
 * @haystack: input
 * @needle: input
 * Return: always 0
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0' ; haystack++)
	{
		char *k = haystack;
		char *n = needle;

		while (*k == *n && *n != '\0')
		{
			k++;
			n++;
		}

		if (*n == '\0')
			return (haystack);
	}
	return (0);
}
