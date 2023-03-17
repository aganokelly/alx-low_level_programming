#include <stdio.h>

/**
 * main - main function
 *
 * Return: always 0
 */

int main(void)
{
	char bi;

	for (bi = 'a' ; bi <= 'z' ; bi++)
		putchar(bi);
	for (bi = 'A' ; bi <= 'Z' ; bi++)
		putchar(bi);
	putchar('\n');
	return (0);
}
