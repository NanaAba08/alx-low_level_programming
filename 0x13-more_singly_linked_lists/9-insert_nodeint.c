#include "lists.h"

/**
 * insert_nodeint_at_index - A function that inserts a new node
 * at a given position
 * @head: A pointer to the first node in the listint_t list
 * @idx: index of the list where the new node should be added
 * @n: value stored in node
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int a;
	listint_t *new;
	listint_t *t = *head;

	new = malloc(sizeof(listint_t));
	if (!new || !head)
		return (NULL);
	new->n = n;
	new->next = NULL;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	for (a = 0; t && a < idx; a++)
	{
		if (a == idx - 1)
		{
			new->next = t->next;
			t->next = new;
			return (new);
		}
		else
			t = t->next;
	}
	return (NULL);
}
