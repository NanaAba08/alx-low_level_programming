#include "main.h"
#include <stdlib.h>
/**
  * count_words - function to count the nummber of words
  * @s: string to analyse
  * Return: the number of words
  */
int count_words(char *s)
{
	int flag, a, b;

	flag = 0;
	b = 0;

	for (a = 0; s[a] != '\0'; a++)
	{
		if (s[a] == ' ')
			flag = 0;
		else if (flag == 0)
		{
			flag = 1;
			b++;
		}
	}
	return (b);
}

/**
  * **strtow - split a string into words
  * @str: string to split
  * Return: a pointer to an array of strings (words)
  * or NULL
  */
char **strtow(char *str)
{
	char **matrix, *tmp;
	int i, j = 0, len = 0, words, c = 0, start, end;

	while (*(str + len))
		len++;
	words = count_words(str);
	if (words == 0)
		return (NULL);
	matrix = (char **) malloc(sizeof(char *) * (words + 1));
	if (matrix == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (c)
			{
				end = 1;
				tmp = (char *) malloc(sizeof(char) * (c + 1));
				if (tmp == NULL)
					return (NULL);
				while (start < end)
					*tmp++ = str[start++];
				*tmp = '\0';
				matrix[j] = tmp - c;
				j++;
				c = 0;
			}
		}
		else if (c++ == 0)
			start = i;
	}
	matrix[j] = NULL;
	return (matrix);
}
