#include "main.h"

/**
 *  factorial - function to find factorial of a certain number
 *  @n: number to find factorial of
 *
 *  Return: factorian of n
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
