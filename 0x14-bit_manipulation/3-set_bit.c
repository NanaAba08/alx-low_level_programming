#include "main.h"

/**
 * set_bit - A function that sets a bit at a given index to 1
 * @n: A pointer to the number to change
 * @index: The index of the bit to set
 * Return: 1 if success, else -1 for failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
