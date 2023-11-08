#include "function_pointers.h"

/**
 * array_iterator - function to execute function on each array element
 * @array: array of items
 * @size: size of array
 * @action: function to execute
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
