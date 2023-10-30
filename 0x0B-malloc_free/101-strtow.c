#include <stdlib.h>

/**
 * count_words - function to count number of words in string
 * @s: string parameter for the function
 *
 * Return: number of words in string, zero otherwise
 */

int count_words(char *s)
{
	int i, count;

	count = 0;

	for (i = 0; s[i] != '\0'; i++)
		if (s[i] == ' ')
			count++;
	return (count);
}

/**
 * strtow - function that splits string into words
 * @str: string parameter to split
 *
 * Return: pointer to array of strings, NULL otherwise
 */

char **strtow(char *str)
{
	char **mat, *z;
	int p, q = 0, len = 0, words, r = 0, start, end;

	while (*(str + len))
		len++;

	words = count_words(str);
	if (words == 0)
		return (NULL);

	mat = (char **) malloc(sizeof(char *) * (words + 1));
	if (mat == NULL)
		return (NULL);

	for (p = 0; p <= len; p++)
	{
		if (str[p] == ' ' || str[p] == '\0')
		{
			if (r)
			{
				end = p;
				z = (char *) malloc(sizeof(char) * (r + 1));
				if (z == NULL)
					return (NULL);
				while (start < end)
					*z++ = str[start++];
				*z = '\0';
				mat[q] = z - r;
				q++;
				r = 0;
			}
		}
		else if (r++ == 0)
			start = p;
	}
	mat[q] = NULL;

	return (mat);
}
