#include <stdio.h>

/**
 * main - this is the main function
 *
 * Return: 0 when successfull
 */

int main(void)
{
	int a = 1;
	int b = 2;
	int c;
	int count = 0;

	while (count < 50)
	{
		printf("%d", a);
		printf(" ");
		printf(",");
		c = a + b;
		a = b;
		b = c;
		count++;
	}
	return (0);
}
