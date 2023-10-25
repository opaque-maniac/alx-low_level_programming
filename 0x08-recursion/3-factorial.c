#include "main.h"

/**
 *  factorial - function to calculate factorial of a number
 *  @n: numeric input for the function
 *
 *  Return: factorial of number given
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0) {
		return (1);
	} else {
		return (n * factorial(n - 1));
	}
}
