#include "lists.h"

/**
 * add_nodeint_end - A function to add a node at the end of a linked list
 * @head: A pointer to the first element in listint_t list
 * @n: value stored in node of the linked list
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *t = *head;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	while (t->next)
		t = t->next;
	t->next = new;
	return (new);
}
