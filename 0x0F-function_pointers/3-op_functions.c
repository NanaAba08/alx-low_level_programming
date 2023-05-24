#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * op_add - Print the sum of two numbers
  * @a: First input number
  * @b: Second input number
  * Return: The sum of a and b
  */
int op_add(int a, int b)
{
	return (a + b);
}

/**
  * op_sub - Print the subtraction result of two numbers
  * @a: First input number
  * @b: Second input number
  * Return: The difference of a and b
  */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
  * op_mul - Print the multiplication of two numbers
  * @a: First input number
  * @b: Second input number
  * Return: The product of a and b
  */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
  * op_div - Print the division of two numbers
  * @a: The first input number
  * @b: The second input number
  * Return: The result of division of a and b
  */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
  * op_mod -  Print the remainder of the division of two numbers
  * @a: The first input number
  * @b: The second input number
  * Return: The remainder of division of a and b
  */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
