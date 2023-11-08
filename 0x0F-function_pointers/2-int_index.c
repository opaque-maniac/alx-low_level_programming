#include "function_pointers.h"

/**
 * int_index - function to search for int in array
 * @array: array of integers
 * @size: size of integer
 * @cmp: function to compare if number is present
 *
 * Return: index of element, -1 otherwise
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
