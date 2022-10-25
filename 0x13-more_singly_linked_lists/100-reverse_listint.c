#include "lists.h"

/**
 * reverse_listint - a function that reverses a listint_t linked list
 * @head: a pointer to the first node of the list
 * Return: returns a pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *temp = NULL, *temp2 = NULL;

	if (*head == NULL)
		return (NULL);
	if ((*head)->next == NULL)
		return (*head);

	temp2 = *head;
	while (*head != NULL)
	{
		temp2 = (*head)->next;
		(*head)->next = temp;
		temp = *head;
		*head = temp2;
	}
	*head = temp;
	return (*head);
}
