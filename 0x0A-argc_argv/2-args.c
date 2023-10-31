#include<stdio.h>

/**
 * main - this is the main function
 * @argc: number of commandline arguements
 * @argv: array of commandline arguements
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
