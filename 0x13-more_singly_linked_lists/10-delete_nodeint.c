#include "lists.h"

/**
 * delete_nodeint_at_index - a function that deletes the node at index
 *                           "index" of a listint_t linked list.
 * @head: the address of a pointer to the first node of the list
 * @index: the index of the node that should be deleted. Index starts at 0.
 * Return: returns 1 (ON SUCCESS)
 *         returns -1 (ON FAILURE)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *ptr = *head, *temp = NULL;
	unsigned int count = 0;

	if (*head == NULL)
		return (-1);
	while (ptr)
	{
		count++;
		ptr = ptr->next;
	}
	if (index >= count)
		return (-1);

	ptr = *head;
	if (index == 0)
	{
		temp = *head;
		ptr = (*head)->next;
		*head = ptr;
		temp->next = NULL;
		free(temp);

		return (1);
	}
	index--;
	while (index)
	{
		ptr = ptr->next;
		index--;
	}
	temp = ptr->next;
	ptr->next = ptr->next->next;
	temp->next = NULL;
	free(temp);

	return (1);
}
