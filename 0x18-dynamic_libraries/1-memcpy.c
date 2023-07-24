#include "main.h"
/**
  * _memcpy - Entry
  * @dest: input memory area
  * @src: memory area
  * @n: number of bytes to be copied
  * Return: pointer to dest
  */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int c;

	for (c = 0; c < n; c++)
		dest[c] = src[c];
	return (dest);
}
