#include "main.h"
#include <stdio.h>
/**
  * leet - Encode a string
  * @l: The string to encode
  * Return: string with all vowels changed
  */
char *leet(char *l)
{
	char a[] = "aeotlAEOTL";
	char b[] = "4307143071";
	int c = 0;

	while (*(l + c) != '\0')
	{
		int d = 0;

		while (a[d] != '\0')
		{
			if (*(l + c) == a[d])
			{
				*(l + c) = b[d];
				break;
			}
			d++;
		}
		c++;
	}
	return (l);
}
