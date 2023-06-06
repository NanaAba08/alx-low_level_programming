#include "lists.h"

/**
 * add_nodeint - A function to add a new node at the beginning of a linked list
 * @head: A pointer to the first node in the list
 * @n: value stored in new node of linked list
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
