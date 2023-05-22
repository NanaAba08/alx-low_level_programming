#include "dog.h"
#include <stdlib.h>

int _strlen(char *s);
char *_strcpy(char *dest, char *src);

/**
  * new_dog - Create basic data for a new dog
  * @name: The name of the dog
  * @age: The age of the dog
  * @owner: The owner of the new dog
  * Return: if function fails NULL
  */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *max_dog;
	int name_l = 0, own_l = 0;

	if (name != NULL && owner != NULL)
	{
		name_l = _strlen(name) + 1;
		own_l = _strlen(owner) + 1;
		max_dog = malloc(sizeof(dog_t));

		if (max_dog == NULL)
			return (NULL);

		max_dog->name = malloc(sizeof(char) * name_l);

		if (max_dog->name == NULL)
		{
			free(max_dog);
			return (NULL);
		}

		max_dog->owner = malloc(sizeof(char) * own_l);

		if (max_dog->owner == NULL)
		{
			free(max_dog->name);
			free(max_dog);
			return (NULL);
		}

		max_dog->name = _strcpy(max_dog->name, name);
		max_dog->owner = _strcpy(max_dog->owner, owner);
		max_dog->age = age;
	}
	return (max_dog);
}

/**
  * _strlen - Returns the length of a string
  * @s: String input
  * Return: The length of a string
  */
int _strlen(char *s)
{
	int a = 0;

	for (; *s != '\0'; s++)
	{
		a++;
	}
	return (a);
}

/**
  * _strcpy - Copies a string
  * @dest: The destination value
  * @src: The source value
  * Return: The pointer to dest
  */
char *_strcpy(char *dest, char *src)
{
	int j;

	for (j = 0; src[j] != '\0'; j++)
	{
		dest[j] = src[j];
	}
	dest[j++] = '\0';
	return (dest);
}
