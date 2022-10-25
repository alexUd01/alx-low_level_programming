#include "lists.h"

/**
 * listint_len - a function that returns the number of elements in a
 * linked listint_t list
 * @h: a pointer to the firt node of the the list
 * Return: returns the number of elements in the linked list
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *ptr = h;
	size_t count = 0;

	if (!h)
		return (0);

	while (ptr)
	{
		count++;
		ptr = ptr->next;
	}
	return (count);
}
