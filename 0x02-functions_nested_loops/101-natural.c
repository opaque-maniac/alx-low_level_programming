#include "main.h"
#include <stdio.h>

/**
 * main - this is the main function
 * Return: 0 when successfull
 */

int main(void)
{
	int i;
	int total = 0;

	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			total += i;
		} else if (i % 5 == 0)
		{
			total += i;
		} else if (i % 3 == 0)
		{
			total += i;
		}
	}
	return (0);
}
