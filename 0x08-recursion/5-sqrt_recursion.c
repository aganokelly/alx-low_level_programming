#include "main.h"
#include <stdio.h>

/**
 *  _sqrt_recursion - returns the natural squareroot of a number
 *  @n: number to calculate the square root
 *  Return: natural square root
 */

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - calculates the natural square root
 * @n: number to calculate the squareroot
 * @k: iterate number
 * Returrn: natural square root
 */

int _sqrt(int n, int k);
{
	int sqrt = k * k;

	if (sqrt > n)
		return (-1);
	if (sqrt == n)
		return (k);
	return (_sqrt(n, k + 1));
}

