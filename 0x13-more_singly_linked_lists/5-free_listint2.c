#include "lists.h"

/**
 * free_listint2 - a function that frees a listint_t list
 * @head: the address of a pointer to the first node of the list
 *
 * Return: returns nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *temp = *head;

	while (*head)
	{
		temp = temp->next;
		free(*head);
		*head = temp;
	}
	*head = NULL;
}
