#include "main.h"
#include <stdlib.h>
/**
  * create_array - Create an array of char and initialize with a char c
  * @size: size of array
  * @c: char to assign
  * Description: create an array of char and assign char c
  * Return: pointer to array or NULL if it fails
  */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	str = malloc(sizeof(char) * size);

	if (size == 0 || str == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		str[i] = c;
	return (str);
}
