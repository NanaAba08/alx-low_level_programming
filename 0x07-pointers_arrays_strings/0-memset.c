#include "main.h"
/**
  * _memset - Fill memory with constant byte
  * @s: shows the 1st n byte of memory
  * @n: the number of byte to fill memory
  * @b: constant byte
  * Return: Always 0
  */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
