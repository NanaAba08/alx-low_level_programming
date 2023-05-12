#include "main.h"
#include <stdio.h>
/**
  * _strstr - Find occurrence of substring needle in string haystack
  * @haystack: input string
  * @needle: input string
  * Return: Pointer to the beginning of substring
  */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *a = haystack;
		char *b = needle;

		while (*a == *b && *b != '\0')
		{
			a++;
			b++;
		}
		if (*b == '\0')
			return (haystack);
	}
	return (NULL);
}
