#include "dog.h"
#include <stdlib.h>

/**
  * free_dog - Free memory allocated for struct dog
  * @d: struct dog to be freed
  * Return: Nothing
  */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}
