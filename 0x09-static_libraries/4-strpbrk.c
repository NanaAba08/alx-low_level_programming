#include "main.h"
#include <stdio.h>
/**
  * _strpbrk - Locate string s in string accept
  * @s: string input
  * @accept: string input
  * Return: a pointer in s that matches a byte in accept
  */
char *_strpbrk(char *s, char *accept)
{
	int i, n;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (n = 0; accept[n] != '\0'; n++)
		{
			if (s[i] == accept[n])
				return (s + i);
		}
	}
	return (NULL);
}
