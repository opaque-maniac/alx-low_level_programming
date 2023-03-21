#include <stdio.h>

/**
 * main - this is the main function
 *
 * Return: 0 when successfull
 */

int main(void)
{
	int a = 0;
	int b = 1;
	int c;
	int count = 0;

	while (count < 50)
	{
		printf("%d, ", a);
		c = a + b;
		a = b;
		b = c;
		count++;
	}
	return (0);
}
