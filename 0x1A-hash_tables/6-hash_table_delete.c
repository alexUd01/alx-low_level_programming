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
/**
 * hash_table_delete - a function that deletes a hash table
 * @ht: the hash table to be deleted
 * Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long i;

	if (ht == NULL)
		return;

	if (ht->array == NULL)
	{
		free(ht);
		return;
	}

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			free_array_item_content(&(ht->array[i]));
		}
	}
	free(ht->array);
	free(ht);
}
int main(void)
{
    hash_table_t *ht;
    char *key;
    char *value;

    ht = hash_table_create(1024);
    hash_table_set(ht, "c", "fun");
    hash_table_set(ht, "python", "awesome");
    hash_table_set(ht, "Bob", "and Kris love asm");
    hash_table_set(ht, "N", "queens");
    hash_table_set(ht, "Asterix", "Obelix");
    hash_table_set(ht, "Betty", "Cool");
    hash_table_set(ht, "98", "Battery Streetz");
    key = strdup("Tim");
    value = strdup("Britton");
    hash_table_set(ht, key, value);
    key[0] = '\0';
    value[0] = '\0';
    free(key);
    free(value);
    hash_table_set(ht, "98", "Battery Street"); 
    hash_table_set(ht, "hetairas", "Bob");
    hash_table_set(ht, "hetairas", "Bob Z");
    hash_table_set(ht, "mentioner", "Bob");
    hash_table_set(ht, "hetairas", "Bob Z Chu");
    hash_table_print(ht);
    hash_table_delete(ht);
    return (EXIT_SUCCESS);
}
