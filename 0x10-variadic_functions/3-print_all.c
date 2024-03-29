#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_all - prints anything
 * @format: list of types of arguements passed to the function
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	char *b, *sep = "";
	va_list list;

	va_start(list, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", sep, va_arg(list, int));
					break;
				case 'i':
					printf("%s%i", sep, va_arg(list, int));
					break;
				case 'f':
					printf("%s%f", sep, va_arg(list, double));
					break;
				case 's':
					b = va_arg(list, char *);
					if (b == NULL)
						b = "(nil)";
					printf("%s%s", sep, b);
					break;
				default:
					i++;
					continue;
			}
			sep = ", ";
			i++;
		}
	}

	va_end(list);
	printf("\n");
}
