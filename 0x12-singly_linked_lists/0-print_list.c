#include "lists.h"

/**
 * print_list - a function that prints all the elements of a list_t list.
 * @h: a pointer to the head of the linked list
 * Return: returns the number of nodes
 */
size_t print_list(const list_t *h)
{
	const list_t *ptr = h;
	size_t i = 0;

	while (ptr != NULL)
	{
		i++;
		if (ptr->str == NULL)
		{
			printf("[0] (nil)\n");
			ptr = ptr->next;
		}
		else
		{
			printf("[%u] %s\n", ptr->len, ptr->str);
			ptr = ptr->next;
		}
	}
	return (i);
}
