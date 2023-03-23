#include "main.h"

/**
 * print_triangle - test function
 *
 * @size: number of rows
 *
 * Return: void
 */

void print_triangle(int size)
{
	int i;
	int j;

	for (i = 1; i <= size; i++)
	{
		for (j = 1; j < size; j++)
		{
			if (j <= size - 1)
			{
				_putchar(' ');
			}
			else
			{
				_putchar('#');
			}
		}
	}
	_putchar('\n');
}
