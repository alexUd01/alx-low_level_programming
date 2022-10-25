#include "lists.h"

/**
 * free_listint_safe - a function that frees a listint_t list and sets
 *                     head to  NULL
 * @h: the address of a pointer to the first node of the list
 * Return: returns the size of the list that was free'd
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *temp = NULL;
	size_t count = 0;

	if (*h == NULL)
		return (0);

	while (*h)
	{
		count++;
		temp = *h;
		*h = (*h)->next;
		temp->next = NULL;
		free(temp);
	}
	*h = NULL;

	return (count);
}
