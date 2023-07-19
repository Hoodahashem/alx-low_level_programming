#include "function_pointers.h"
/**
 * print_name - prints the name of the preson
 * @name:the name of the preson
 * Return: nothing
 * @f:the pointer
 */
void print_name(char *name, void (*f)(char *))
{
	void (*f)(char *name) = print_name_as_is;
}
