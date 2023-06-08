#include "main.h"

/**
 * flip_bits - A function that counts the number of bits to change
 * to get from one number to another
 * @n: first number input
 * @m: second number input
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int a, count = 0;
	unsigned long int current;
	unsigned long int diff = n ^ m;

	for (a = 63; a >= 0; a--)
	{
		current = diff >> a;
		if (current & 1)
			count++;
	}
	return (count);
}
