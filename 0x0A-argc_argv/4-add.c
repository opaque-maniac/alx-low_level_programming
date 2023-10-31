#include <stdio.h>
#include <stdlib.h>

/**
 * main - this is the main function
 * @argc: this is the number of commandline arguements
 * @argv: this is the array of string commandline arguements
 *
 * Return: 0, 1 if error
 */
int main(int argc, char *argv[])
{
	int i, j, sum = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j]; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}
	printf("%i\n", sum);
	return (0);
}
