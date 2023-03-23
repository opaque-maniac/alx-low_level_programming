#include "main.h"

/**
 * _isupper - this is test function
 *
 * @c: this is the ascii value
 *
 * Return: 1 when uppercase, 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
