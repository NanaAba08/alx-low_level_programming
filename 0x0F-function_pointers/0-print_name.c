#include "function_pointers.h"

/**
  * print_name - Print a name
  * @name: The name of a person to print
  * @f: The pointer to the function
  * Return: Nothing
  */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
