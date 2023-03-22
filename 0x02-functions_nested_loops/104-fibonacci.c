#include <stdio.h>

/**
 * main - this is the main function
 *
 * Return: 0 when successfull
 */

int main(void)
{
	int count = 0;
	long int a = 1;
	long int b = 2;
	long int temp;

	while (count < 98)
	{
		if (a < 420196140727489673)
		{
			printf("%li", a);
		} else
		{
			printf("%li", a);
			break;
		}
		temp = a + b;
		a = b;
		b = temp;
		count++;
		if (count < 97)
		{
			printf(", ");
		} else
		{
			printf("\n");
		}
	}
	return (0);
}
