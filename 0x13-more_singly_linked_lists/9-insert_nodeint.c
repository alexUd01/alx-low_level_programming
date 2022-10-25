#include "lists.h"

/**
 * insert_nodeint_at_index - a function that inserts a new node at a
 * given position
 * @head: the address of a pointer to the first node of the list
 * @idx: the index of the list where the new node should be added,
 * starting at 0.
 * @n: the data of the new node to be inserted at "idx"
 * Return: returns the address of the new node (ON SUCCESS)
 *         returns NULL (ON FAILURE)
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *ptr = NULL, *temp = NULL;
	unsigned int count = 0, count2 = 0;

	ptr = *head;
	while (ptr)
	{
		count++;
		ptr = ptr->next;
	}
	if (idx > count)
		return (NULL);

	temp = malloc(sizeof(listint_t));
	if (!temp)
		return (NULL);

	temp->n = n;
	temp->next = NULL;

	if (idx == 0)
	{
		temp->next = *head;
		*head = temp;
		return (*head);
	}

	ptr = *head;
	while (ptr)
	{
		if (count2 == (idx - 1))
		{
			temp->next = ptr->next;
			ptr->next = temp;
			return (temp);
		}
		count2++;
		ptr = ptr->next;
	}
	return (NULL);
}
