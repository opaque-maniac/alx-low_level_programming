#include <stdio.h>

/**
 * main - this is the main function
 * @argc: number of commandline arguements
 * @argv: string of commandline arguements
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	if (argc == 1)
		printf("%s\n", argv[0]);
	return (0);
}
