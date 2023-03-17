#include <stdio.h>

/**
 * main - this is the main function
 *
 * Return: 0 when successfull
 */

int main()
{
	int counter = 0;

	for (int i = 0; i < 10; i++)
	{
		for (int j = 1; j < 10; j++)
		{
			putchar(i);
			putchar(j);
			putchar(' ');
			counter++;
			if (counter <= 89)
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
