#include "main.h"

/**
 * binary_to_uint - A function that converts a binary number to unsigned int
 * @b: The string containing the binary number
 * Return: The converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int a;
	unsigned int num = 0;

	if (!b)
		return (0);

	for (a = 0; b[a]; a++)
	{
		if (b[a] < '0' || b[a] > '1')
			return (0);
		num = 2 * num + (b[a] - '0');
	}
	return (num);
}
