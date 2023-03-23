#include "main.h"

/**_isdigit - this is the function to test out
 *
 * @c: this is the integer to test
 * 
 * Return: 1 when a digit, 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}
