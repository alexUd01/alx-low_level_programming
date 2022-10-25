#include "lists.h"

/**
 * add_nodeint - a function that adds a new node at the beginning of a
 * listint_t list
 * @head: the address of the pointer to the first node
 * @n: the data to be added.
 * Return: returns the address of the enw element (ON SUCCESS)
 *         returns NULL (ON FAILURE)
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp = malloc(sizeof(listint_t));

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

	temp->next = *head;
	*head = temp;
	temp = NULL;

	return (*head);
}
