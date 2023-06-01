#include "lists.h"
#include <string.h>

/**
  * add_node - Adds a new node at the beginning of
  * @head: Pointer to the head of list_t list
  * @str: String to add to list_t list
  * Return: the address of the new element, or NULL if it failed
  */
list_t *add_node(list_t **head, const char *str)
{
	char *dupe;
	int len;
	list_t *n;

	n = malloc(sizeof(list_t));
	if (n == NULL)
		return (NULL);
	dupe = strdup(str);
	if (dupe == NULL)
	{
		free(n);
		return (NULL);
	}
	for (len = 0; str[len];)
		len++;
	n->str = dupe;
	n->len = len;
	n->next = *head;

	*head = n;
	return (n);
}
