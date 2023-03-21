#include "main.h"

/**
 * print_times_table - this is the function for printing table
 * @n: this is the number of rows and collums
 *
 * Return: void
 */

void print_times_table(int n)
{
	int i, j, k, l, m;

	if (n > 15 || n < 0)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				k = i * j;
				if (k > 9)
				{
					l = k % 10;
					m = (k - l) / 10;
					_putchar(m + '0');
					_putchar(l + '0');
					if (j < n)
					{
						_putchar(44);
						_putchar(32);
					} else
					{
						_putchar('\n');
					}
				} else
				{
					_putchar(k + '0');
					if (j < n)
					{
						_putchar(44);
						_putchar(32);
					} else
					{
						_putchar('\n');
					}
				}
			}
		}
	}
}
