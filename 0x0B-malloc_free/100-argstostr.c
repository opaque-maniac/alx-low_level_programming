#include <stdlib.h>

/**
 * argstostr - function to turn arguements into a string
 * @ac: number of arguements
 * @av: string of arguements
 *
 * Return: pointer to new string, NULL otherwise
 */
char *argstostr(int ac, char **av)
{
	int a, b, c, len;
	char *temp;

	c = 0;
	len = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (a = 0; a < ac; a++)
		for (b = 0; av[a][b]; b++)
			len++;
	len += ac;

	temp = malloc(sizeof(char) * len + 1);
	if (temp == NULL)
		return (NULL);

	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b]; b++)
		{
			temp[c] = av[a][b];
			c++;
		}
		if (temp[c] == '\0')
			temp[c++] = '\n';
	}
	return (temp);
}
