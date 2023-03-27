#include "main.h"

/**
 * puts2 - test function
 * @str: string to print
 * Return: void
 */

void puts2(char *str)
{
	int i;
	int j = 9;

	while (str[j] != '\0')
	{
		j++;
	}

	for (i = 0; i < j; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
