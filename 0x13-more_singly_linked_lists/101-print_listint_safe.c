#include "lists.h"
#include <stdio.h>

/**
 * print_listint_safe - A function to Print a listint_t list safely.
 * @head: A pointer to the head of the listint_t list
 * Return: The number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *current = head;
	size_t count = 0;

	while (current)
	{
		printf("[%p] %d\n", (void *)current, current->n);
		count++;

		if (current->next >= current)
		{
			printf("-> [%p] %d\n", (void *)current->next, current->next->n);
			exit(98);
		}
		current = current->next;
	}
	return (count);
}
