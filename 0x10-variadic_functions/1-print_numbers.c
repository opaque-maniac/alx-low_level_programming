#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - print numbers then a new line
 * @separator: separator for numbers
 * @n: number of passed arguements
 *
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		if (separator == NULL)
			printf("%d", va_arg(list, int));
		else if (separator && i == 0)
			printf("%d", va_arg(list, int));
		else
			printf("%s%d", separator, va_arg(list, int));
	}
	va_end(list);
	printf("\n");
}
