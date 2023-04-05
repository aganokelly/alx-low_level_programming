#include "main.h"
#include <stdio.h>

int actual_sqrt_recursion(int n, int i);

/**
 *  _sqrt_recursion - returns the natural squareroot of a number
 *  actual_sqrt_recursion - calculates the natural square root
 *  @n: number to calculate the square root
 *  Return: resulting square root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(n, 0));
}

/**
 * actual_sqrt_recursion - calculates the natural square root
 * @n: number to calculate the squareroot
 * @i: iterate number
 * Returrn: natural square root
 */

int actual_sqrt_recursion(int n, int i)
{

	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (actual_sqrt_recursion(n, i + 1));
}

