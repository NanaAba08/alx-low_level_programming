#include "main.h"
/**
  * _strspn - Print the length of prefix substring
  * @s: memory area
  * @accept: another memory area
  * Return: the number of bytes of s from accept
  */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;
	int a;

	while (*s)
	{
		for (a = 0; accept[a]; a++)
		{
			if (*s == accept[a])
			{
				n++;
				break;
			}
			else if (accept[a + 1] == '\0')
				return (n);
		}
		s++;
	}
	return (n);
}
