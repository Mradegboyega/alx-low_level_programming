#include "function_pointers.h"

/**
 * print_name - prints a name using the provided function
 * @name: The name to print
 * @f: A function pointer to a function that prints a name
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name); /* Call the provided function to print the name */
	}
}
