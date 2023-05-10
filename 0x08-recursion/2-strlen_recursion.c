#include "main.h"
/**
  * _strlen_recursion - The length of a string
  * @s: The string to count
  * Return: the length of the string
  */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	s++;
	return (_strlen_recursion(s) + 1);
}
