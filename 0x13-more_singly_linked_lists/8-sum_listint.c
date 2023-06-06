#include "lists.h"

/**
  * sum_listint - A function that finds the sum of all
  * the data (n) in a listint_t list
  * @head: the first node in the listint_t list
  * Return: The sum of the data
  */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *t = head;

	while (t)
	{
		sum += t->n;
		t = t->next;
	}
	return (sum);
}
