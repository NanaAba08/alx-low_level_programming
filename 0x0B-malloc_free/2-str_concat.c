#include "main.h"
#include <stdlib.h>
/**
  * str_concat - Concatenates two strings
  * @s1: input one
  * @s2: input two
  * Return: concatenate of s1 and s2
  */
char *str_concat(char *s1, char *s2)
{
	char *conc;
	int i, a;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	i = a = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[a] != '\0')
		a++;
	conc = malloc(sizeof(char) * (i + a + 1));

	if (conc == NULL)
		return (NULL);
	i = a = 0;
	while (s1[i] != '\0')
	{
		conc[i] = s1[i];
		i++;
	}
	while (s2[a] != '\0')
	{
		conc[i] = s2[a];
		i++, a++;
	}
	conc[i] = '\0';
	return (conc);
}
