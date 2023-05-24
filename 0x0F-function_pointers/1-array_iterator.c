#include "function_pointers.h"
/**
  * array_iterator - Executes a function given as a parameter
  * on each element of an array
  * @array: The array to be evaluated
  * @size: The size of the array
  * @action: A pointer to the function to be used
  * Return: Pointer to function of array
  */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int a = 0;

	if (array != NULL && action != NULL && size > 0)
	{
		while (a < size)
		{
			action(array[a]);
			a++;
		}
	}
}
