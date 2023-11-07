#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - function to initialize struct
 * @d: struct for dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: dog's owner
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

	d->name = name;
	d->age = age;
	d->owner = owner;
}
