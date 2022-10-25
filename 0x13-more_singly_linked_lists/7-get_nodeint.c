#include "lists.h"

/**
 * get_nodeint_at_index - a function that returns the nth node of listint_t
 * linked list
 * @head: a pointer to the first node of the linked list
 * @index: the index of the node, starting at 0
 * Return: returns the nth node of the list (ON SUCCESS)
 *         returns NULL if node does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *ptr = head;
	unsigned int count = 0, count2 = 0;

	while (ptr)
	{
		count++;
		ptr = ptr->next;
	}
	if (index >= count)
		return (NULL);

	ptr = head;
	while (ptr)
	{
		if (count2 == index)
		{
			return (ptr);
		}
		count2++;
		ptr = ptr->next;
	}
	return (NULL);
}
