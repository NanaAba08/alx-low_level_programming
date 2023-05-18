#include "main.h"
#include <stdlib.h>
/**
  * _calloc - Allocate memory for an array
  * @nmemb: number of elements in the array
  * @size: size of each element
  * Return: Pointer to allocated memory
  */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int i = 0, j = 0;
	char *p;

	if (nmemb == 0 || size == 0)
		return (NULL);

	j = nmemb * size;
	p = malloc(j);

	if (p == NULL)
		return (NULL);
	while (i < j)
	{
		p[i] = 0;
		i++;
	}
	return (p);
}
