#include "lists.h"

/**
 * sum_listint - a function that returns the sum of all the data (n)
 * of a listint_t linked list.
 * @head: a pointer to the first node of the list.
 * Return: returns the sum of the integers in the linked list
 */
int sum_listint(listint_t *head)
{
	listint_t *ptr = head;
	int sum = 0;

	if (!head)
		return (0);
	while (ptr)
	{
		sum = sum + ptr->n;
		ptr = ptr->next;
	}
	return (sum);
}
