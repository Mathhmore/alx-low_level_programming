#include "function_pointers.h"

/**
 * print_name - prints element name
 * @name: element name
 * @f: a function pointer
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
