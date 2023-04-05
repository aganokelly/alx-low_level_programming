#include "main.h"
#include <stdio.h>

/**
 * sqFunction - checks if sqrt of numbers exists
 * @num: number
 * @psqrt: possible sqrt of number
 * Return: sqrt of number of -1 for error
 */

int sqFunction(int num, int psqrt)
{
	if ((psqrt * psqrt) == num)
	{
		return (psqrt);
	}
	else
	{
		if ((psqrt * psqrt) > num)
			return (-1);
		else
			return (sqFunction(num, psqrt + 1));
	}
}
/**
 *  _sqrt_recursion - returns natural square root of a number
 *  @n: number for square root
 *  Return: squareroot of n
 *  -1 if n does not have a natural sqrt
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (sqFunction(n, 0));
}
