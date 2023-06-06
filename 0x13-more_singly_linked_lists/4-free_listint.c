#include "lists.h"

/**
  * free_listint - A function that frees a linked list
  * @head: the listint_t list to free
  */
void free_listint(listint_t *head)
{
	listint_t *t;

	while (head)
	{
		t = head->next;
		free(head);
		head = t;
	}
}
