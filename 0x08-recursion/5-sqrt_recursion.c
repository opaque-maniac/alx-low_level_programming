#include "main.h"

/**
 * helper - function returning square root with more flexibility
 * @x: number to find square root
 * @y: number to use for iteration
 *
 * Return: square root of x
 */

int helper(int x, int y)
{
	int a;

	a = y * y;
	if (a == x)
	{
		return (y);
	}
	else if (a < x)
	{
		return (helper(x, y + 1));
	}
	else
	{
		return (-1);
	}
}

/**
 * _sqrt_recursion - function to return natural square root of a number
 * @n: number to return square root of
 *
 * Return: natural square root of n
 */

int _sqrt_recursion(int n)
{
	return (helper(n, 1));
}
