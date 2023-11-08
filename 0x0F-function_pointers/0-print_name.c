#include "function_pointers.h"

/**
 * print_name - function to print name
 * @name: name to print
 * @f: pointer to the function
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	f(name);
}
