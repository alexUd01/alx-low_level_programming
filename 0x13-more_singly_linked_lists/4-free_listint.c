#include "lists.h"

/**
 * free_listint - a function that frees a listint_t list
 * @head: a pointer to the first node of the list
 *
 * Returns nothing
 */
void free_listint(listint_t *head)
{
	listint_t *temp = head;

	while (head)
	{
		temp = temp->next;
		free(head);
		head = temp;
	}
}
