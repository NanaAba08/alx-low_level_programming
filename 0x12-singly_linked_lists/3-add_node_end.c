#include "lists.h"
#include <string.h>

/**
  * add_node_end - Adds a new node at the end of a list_t list
  * @head: A pointer to the head of list_t list
  * @str: string to add to the list_t list
  * Return: The address of the new element, or NULL if it failed
  */
list_t *add_node_end(list_t **head, const char *str)
{
	char *dupe;
	int len;
	list_t *n, *e;

	n = malloc(sizeof(list_t));
	if (n == NULL)
		return (NULL);

	dupe = strdup(str);
	if (str == NULL)
	{
		free(n);
		return (NULL);
	}
	for (len = 0; str[len];)
		len++;
	n->str = dupe;
	n->len = len;
	n->next = NULL;

	if (*head == NULL)
		*head = n;
	else
	{
		e = *head;
		while (e->next != NULL)
			e = e->next;
		e->next = n;
	}
	return (*head);
}
