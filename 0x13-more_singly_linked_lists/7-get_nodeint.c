#include "lists.h"

/**
  * get_nodeint_at_index - A function that returns the nth node
  * of a listint_t linked list
  * @head: the first node in the listint_t list
  * @index: the index of the node
  * Return: A pointer to the node, or NULL
  */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int a = 0;
	listint_t *t = head;

	while (t && a < index)
	{
		t = t->next;
		a++;
	}
	return (t ? t : NULL);
}
