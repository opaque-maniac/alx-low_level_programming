#include <stdlib.h>

/**
 * _strdup - function to return pointer to string on new memory
 * @str: string to duplicate
 *
 * Return: pointer to copy of string, or NULL otherwise
 */

char *_strdup(char *str)
{
	unsigned int i, j;
	char *temp;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		;

	temp = malloc((i * sizeof(char)) + 1);
	if (temp == NULL)
		return (NULL);

	for (j = 0; j < i; j++)
		temp[j] = str[j];
	temp[i] = '\0';

	return (temp);
}
