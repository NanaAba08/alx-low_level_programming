#include "lists.h"

/**
 * pop_listint - A function that deletes the head node of a linked list
 * @head: A pointer to the first element in the linked list
 * Return: the head nodes data (n), if the linked list is empty return 0
 */
int pop_listint(listint_t **head)
{
	listint_t *t;
	int i;

	if (!head || !*head)
		return (0);

	i = (*head)->n;
	t = (*head)->next;
	free(*head);
	*head = t;
	return (i);
}
