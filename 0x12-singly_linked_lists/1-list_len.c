#include "lists.h"

/**
 * list_len - a function that returns the number of elements in a linked
 * list_t list.
 * @h: a pointer to the first node of the linked list
 * Return: returns the number of elements in a linked list.
 */
size_t list_len(const list_t *h)
{
	const list_t *ptr = h;
	size_t i = 0;

	while (ptr != NULL)
	{
		if (ptr->str != NULL)
			i++;
		ptr = ptr->next;
	}
	return (i);
}
