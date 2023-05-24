#include "function_pointers.h"

/**
  * int_index - Searches for an integer
  * @array: The array to be assessed
  * @size: The number of elements in the array
  * @cmp: A pointer to the function to compare values
  * Return: The index of the first element for which the cmp
  * function does not return 0
  * If no element matches, return -1
  * If size <= 0, return -1
  */
int int_index(int *array, int size, int (*cmp)(int))
{
	int j = 0;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			while (j < size)
			{
				if (cmp(array[j]))
					return (j);
				j++;
			}
		}
	}
	return (-1);
}
