#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
  * print_strings - Print strings followed by a new line
  * @separator: The string to be printed between the strings
  * @n: The number of strings passed to the function
  * @...: A variable number of strings to print
  * Description: If separator is NULL, don’t print it
  * If one of the string is NULL, print (nil) instead
  */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list string;
	char *str;
	unsigned int x;

	va_start(string, n);

	for (x = 0; x < n; x++)
	{
		str = va_arg(string, char *);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (x != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(string);
}
