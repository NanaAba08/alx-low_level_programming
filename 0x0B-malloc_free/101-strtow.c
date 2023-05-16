#include "main.h"
#include <stdlib.h>

int word_len(char *str);
int count_words(char *str);
char **strtow(char *str);
/**
  * word_len - Finds the index marking of the first word in a string
  * @str: The string to be analyzed
  * Return: The index marking of the first word pointed by str
  */
int word_len(char *str)
{
	int c = 0, len = 0;

	while (*(str + c) && *(str + c) != ' ')
	{
		len++;
		c++;
	}
	return (len);
}

/**
  * count_words - Count the number of words in a string
  * @str: The string to be analyzed
  * Return: The number of words in a string
  */
int count_words(char *str)
{
	int c = 0, words = 0, len = 0;

	for (c = 0; *(str + c); c++)
		len++;
	for (c = 0; c < len; c++)
	{
		if (*(str + c) != ' ')
		{
			words++;
			c += word_len(str + c);
		}
	}
	return (words);
}

/**
  * strtow - Split a string into words
  * @str: The string to split
  * Return: if str = NULL, str = "", or the function fails - NULL.
  * Otherwise - a pointer to an array of strings (words).
  */
char **strtow(char *str)
{
	char **strings;
	int c = 0, words, w, letters, l;

	if (str == NULL || str[0] == '\0')
		return (NULL);

	words = count_words(str);
	if (words == 0)
		return (NULL);

	strings = malloc(sizeof(char *) * (words + 1));
	if (strings == NULL)
		return (NULL);

	for (w = 0; w < words; w++)
	{
		while (str[c] == ' ')
			c++;

		letters = word_len(str + c);
		strings[w] = malloc(sizeof(char) * (letters + 1));

		if (strings[w] == NULL)
		{
			for (; w >= 0; w--)
				free(strings[w]);
			free(strings);
			return (NULL);
		}
		for  (l = 0; l < letters; l++)
			strings[w][l] = str[c++];
		strings[w][l] = '\0';
	}
	strings[w] = NULL;
	return (strings);
}
