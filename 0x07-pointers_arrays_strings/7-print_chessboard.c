#include "main.h"

/**
 * print_chessboard - prints input
 * @a: array
 * Return: always 0
 */

void print_chessboard(char (*a)[8])
{
	int k;
	int l;

	for (k = 0 ; k < 8 ; k++)
	{
		for (l = 0 ; l < 8 ; l++)
			_putchar(a[k][l]);
		_putchar('\n');
	}
}
