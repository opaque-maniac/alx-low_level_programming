#include <stdio.h>

/**
 * main - this is the main function
 *
 * Return: 0 when successfull
 */

int main(void)
{
	int count = 0;
	int a = 1;
	int b = 2;
	int temp;

	while (count < 98)
	{
		printf("%d", a);
		temp = a + b;
		a = b;
		b = temp;
		count++;
		if (count == 97)
		{
			printf("\n");
		} else
		{
			printf(", ");
		}
	}
	return (0);
}
