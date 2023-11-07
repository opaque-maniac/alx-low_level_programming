#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - function to intialize dog struct variable
 * @d: this is the dog struct
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * 
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		d = malloc(sizeof(struct dog));
		if (d == NULL)
			return;
	}

	d -> name = name;
	d -> age = age;
	d -> owner = owner;
}
