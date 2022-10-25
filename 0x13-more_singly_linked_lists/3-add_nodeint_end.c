#include "lists.h"

/**
 * add_nodeint_end - a function that adds a new node atthe endof a
 * listint_t list
 * @head: the address of a pointer to the first node of the list
 * @n: the data to be added to the new node
 * Return: returns the address of the new element (ON SUCCESS)
 *         returns NULL (ON FAILURE)
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp = malloc(sizeof(listint_t));
	listint_t *ptr = NULL;

	if (!temp)
		return (NULL);
	temp->n = n;
	temp->next = NULL;

	if (!(*head))
	{
		*head = temp;
		temp = NULL;
		return (*head);
	}

	ptr = *head;
	while (ptr->next)
	{
		ptr = ptr->next;
	}
	ptr->next = temp;
	temp = NULL;

	return (*head);
}
