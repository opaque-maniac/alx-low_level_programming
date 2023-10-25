#include "main.h"

/**
 *  _pow_recursion - function to raise a number to a certain power
 *  @x: number to be raised
 *  @y: power to raise the number to
 *
 *  Return: number x raised to power y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
