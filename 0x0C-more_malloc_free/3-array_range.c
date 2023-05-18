#include "main.h"
#include <stdlib.h>
/**
  * array_range - Create an array of integers
  * @min: minimum integer to be created
  * @max: maximum integer to be created
  * Return: Pointer to newly created array
  */
int *array_range(int min, int max)
{
	int *a, i = 0;

	if (min > max)
		return (NULL);
	a = malloc((sizeof(int) * (max - min)) + sizeof(int));

	if (a == NULL)
		return (NULL);
	while (min <= max)
	{
		a[i] = min;
		i++;
		min++;
	}
	return (a);
}
