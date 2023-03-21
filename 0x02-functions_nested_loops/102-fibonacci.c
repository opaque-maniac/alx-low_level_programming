#include <stdio.h>

/**
 * main - this is the main function
 *
 * Return: 0 when successfull
 */

int main(void)
{
	int i = 1;
	int j = 1;
	int k = 2;
	int temp;
	
	while (i <= 50)
	{
		printf("%d", i);
		temp = j + k;
		i = j;
		j = temp;
		if (count == 49)
		{
			printf('\n');
		} else
		{
			printf(", ");
		}
		i++;
	}
	return (0)
