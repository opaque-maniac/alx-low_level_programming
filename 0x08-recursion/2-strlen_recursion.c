#include "main.h"

/**
 *  _strlen_recursion - get the length of the string with recursion
 *  @s: string input
 *
 *  Return: length of string in int
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
