#include "hash_tables.h"

/**
 * free_array_item_content - a function that frees the item of a hash
 *                           table array
 * @item: a linked list containing collided items
 * Return: void
 */
void free_array_item_content(hash_node_t **item)
{
	hash_node_t *temp, *ptr;

	if (*item == NULL)
		return;

	/* Case 1: no collision */
	if ((*item)->next == NULL)
	{
		free((*item)->key);
		free((*item)->value);
		free(*item);
		*item = NULL;
		return;
	}

	/* Case 2: collision */
	ptr = *item;
	while (ptr != NULL)
	{
		temp = ptr;
		ptr = ptr->next;
		free(temp->key);
		free(temp->value);
		free(temp);
	}
	*item = NULL;
}
