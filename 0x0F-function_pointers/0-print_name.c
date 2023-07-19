#include "function_pointers.h"
/**
 * print_name - prints the name of the preson
 * @name:the name of the preson
 * Return: nothing
 * @f:the pointer
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL || f != NULL)
		f(name);
	else
		return;
}
