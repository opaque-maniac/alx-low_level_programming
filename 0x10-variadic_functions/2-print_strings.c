#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - function to print string and seperator
 * @separator: separator
 * @n: number of strings passed
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;
	char *c;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		c = va_arg(list, char *);
		if (!c)
			c = "(nil)";
		if (!separator)
			printf("%s", c);
		else if (separator && i == 0)
			printf("%s", c);
		else
			printf("%s%s", separator, c);
	}

	va_end(list);
	printf("\n");
}
