#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - to find the length of a string
 * @string: string to find length
 *
 * Return: len of string
 */
int _strlen(char *string)
{
	int i;

	i = 0;

	while (string[i] != '\0')
		i++;
	return (i);
}

/**
 * _strcpy - function to copy string
 * @dest: destination buffer
 * @src: source string
 *
 * Return: void
 */
void _strcpy(char *dest, char *src)
{
	int i, len;

	len = _strlen(src);
	i = 0;

	for (i = 0; i < len; i++)
		dest[i] = src[i];
	dest[i] = '\0';
}

/**
 * new_dog - function to create new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: pointer to new dog or null
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	char *name_copy, *owner_copy;

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	name_copy = malloc(sizeof(char) * (_strlen(name) + 1));
	owner_copy = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (name_copy == NULL || owner_copy == NULL)
	{
		free(dog);
		free(name_copy);
		free(owner_copy);
		return (NULL);
	}

	_strcpy(name_copy, name);
	_strcpy(owner_copy, owner);

	dog->name = name_copy;
	dog->age = age;
	dog->owner = owner_copy;
	return (dog);
}
