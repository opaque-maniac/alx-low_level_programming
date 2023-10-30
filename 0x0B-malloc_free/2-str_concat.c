#include <stdlib.h>

/**
 * str_concat - concatenates two strings parameters
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to new string, otherwise NULL
 */
char *str_concat(char *s1, char *s2)
{
	char *temp;
	int i, j, a, b;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;

	temp = malloc((i * sizeof(char)) + (j * sizeof(char)) + 1);
	if (temp == NULL)
		return (NULL);

	for (a = 0, b = 0; a < (i + j + 1); a++)
	{
		if (a < i)
			temp[a] = s1[a];
		else
			temp[a] = s2[b++];
	}

	return (temp);
}
