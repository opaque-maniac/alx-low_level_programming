#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - function to free dog
 * @d: dog struct
 *
 * Return: void
 */
void free_dog(dog_t *d)
{
	free(d);
}
