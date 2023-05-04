#include "main.h"
/**
  * string_toupper - Change all lowercase letters to uppercase
  * @str: The string to change
  * Return: A pointer to the chnaged string
  */
char *string_toupper(char *str)
{
	int index = 0;

	while (str[index])
	{
		if (str[index] >= 'a' && str[index] <= 'z')
			str[index] -= 32;
		index++;
	}
	return (str);
}
