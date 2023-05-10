#include "main.h"
/**
  * factorial - Find the factorial of a number
  * @n: the number to find the factorial
  * Return: the factorial of a number
  */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n <= 1)
		return (1);
	return (n * factorial(n - 1));
}
