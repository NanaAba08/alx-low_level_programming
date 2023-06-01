#include "lists.h"

/**
  * list_len - Determines the number of elements
  * @h: the list_t list
  * Return: The number of elements in a linked list_t list
  */
size_t list_len(const list_t *h)
{
	size_t elements = 0;

	while (h)
	{
		elements++;
		h = h->next;
	}
	return (elements);
}
