#include "main.h"
#include <string.h>

/**
 * cap_string - function to capitalize
 * @s: string to capitalize
 * Return: pointer to string
 */

char *cap_string(char *s)
{
	int i;
	int j;
	char separators[] = " \t\n,'.!?\"(){}";

	for (i = 0; s[i] != '\0'; i++)
	{
		if (i == 0 || !strchr(separators, s[i - 1]))
		{
			if (s[i] >= 'a' && s[i] <= 'z')
				s[i] -= 32;
		}
		else if (s[i] == '\'' && (i == 1 || strchr(separators, s[i - 2])))
		{
			j = i + 1;
			if (s[j] >= 'a' && s[j] <= 'z')
				s[j] -= 32;
		}
	}

	return (s);
}
