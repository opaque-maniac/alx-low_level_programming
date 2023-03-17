#include <stdio.h>

/**
 * main - this is the main function
 *
 * Return: 0 when successfull
 */

int main(void)
{
	int i = 0;
	int j = 0;
	int counter = 0;

	for (i = 0; i < 10; i++)
	{
		for (j = 1; j < 10; j++)
		{
			putchar(48 + i);
			putchar(48 + j);
			putchar(' ');
			counter++;
			if (counter < 79)
			{
				putchar(',');
			} else
			{
				break;
			}
		}
	}
	putchar('\n');
	return (0);
}
