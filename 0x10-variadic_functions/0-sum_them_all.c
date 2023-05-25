#include "variadic_functions.h"
#include <stdarg.h>
/**
  * sum_them_all - Return the sum of all its parameters
  * @n: The number of parameters to the function
  * @...: The variable number of parameters to find the sum of
  * Return: 0 if n == 0, otherwise the sum of parameters
  */
int sum_them_all(const unsigned int n, ...)
{
	va_list ab;
	unsigned int j, sum = 0;

	va_start(ab, n);

	for (j = 0; j < n; j++)
		sum += va_arg(ab, int);

	va_end(ab);
	return (sum);
}
