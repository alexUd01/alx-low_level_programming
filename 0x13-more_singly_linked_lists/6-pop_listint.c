#include "lists.h"

/**
 * pop_listint - a function that deletes the head node of a listint_t
 * linked list
 * @head: the address of a pointer to the first node of thelinked list
 * Return: returns the head node's data (n).
 *         returns 0 if list is empty.
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	if (*head == NULL)
		return (0);
	n = (*head)->n;
	temp = *head;
	*head = (*head)->next;
	free(temp);
	temp = NULL;

	return (n);
}
