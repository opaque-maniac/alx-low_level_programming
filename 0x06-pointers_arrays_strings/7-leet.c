#include "main.h"

/**
 * leet - test function
 * @s: string to encode
 * Return: pointer to encoded string
 */

char *leet(char *s)
{
	int i;
	int j;
	char letters[] = "aAeEoOtTlL";
	char numbers[] = "44337071";

	for (i = 0; s[i]; i++)
	{
		for (j = 0; letters[j]; j++)
		{
			if (s[i] == letters[j])
				s[i] = numbers[j];
		}
	}

	return (s);
}
