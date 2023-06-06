#include "lists.h"

/**
 * delete_nodeint_at_index - A function that deletes a node
 * in a listint_t list at a certain index
 * @head: A pointer to the first element in the listint_t list
 * @index: index of the node to be deleted
 * Return: 1 (Success), or -1 (Fail)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *t = *head;
	listint_t *cur = NULL;
	unsigned int a = 0;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(t);
		return (1);
	}
	while (a < index - 1)
	{
		if (!t || !(t->next))
			return (-1);
		t = t->next;
		a++;
	}
	cur = t->next;
	t->next = cur->next;
	free(cur);
	return (1);
}
