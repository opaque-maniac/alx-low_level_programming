#include <stdio.h>
#include <stdlib.h>

int coins(int change);

/**
 * main - this is the main function
 * @argc: this is the number of commandline arguements
 * @argv: this is the array of commandline arguements
 *
 * Return: 0 when successful, 1 otherwise
 */
int main(int argc, char *argv[])
{
	int change;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	if (atoi(argv[1]) < 0)
	{
		printf("%d\n", 0);
		return (1);
	}

	change = atoi(argv[1]);
	printf("%d\n", coins(change));
	return (0);
}

/**
 * coins - function to calcualte number of coins
 * @change - amount of cents
 * 
 * Return: number of coins
 */

int coins(int change)
{
	int num = 0, ch = change;

	while (ch > 0)
	{
		num++;
		if ((ch - 25) >= 0)
		{
			ch -= 25;
			continue;
		}
		if ((ch - 10) >= 0)
		{
			ch -= 10;
			continue;
		}
		if ((ch - 5) >= 0)
		{
			ch -= 5;
			continue;
		}
		if ((ch - 2) >= 0)
		{
			ch -= 2;
			continue;
		}
		ch--;
	}
	return (num);
}
