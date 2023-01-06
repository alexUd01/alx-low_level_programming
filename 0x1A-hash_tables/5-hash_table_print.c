#include "hash_tables.h"

/**
 * hash_table_print - a function that prints a hash table
 * Description: prints the key/value in the order that they appear in the
 *              array of the hash table
 *              * Order: array, list
 *              * if @ht is null don't print anything
 * @ht: the hash table
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *ptr;
	unsigned long i;
	int first_initialized_item;

	if (ht == NULL)
	{
		printf("{}\n");
		return;
	}

	/* if ht != NULL */
	putchar('{');
	first_initialized_item = 0;
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			ptr = ht->array[i];
			while (ptr != NULL)
			{
				if (first_initialized_item == 0)
				{
					printf("'%s': '%s'", ptr->key, ptr->value);
					first_initialized_item = 1;
					break;
				}
				printf(", '%s': '%s'", ptr->key, ptr->value);
				ptr = ptr->next;
			}
		}
	}
	printf("}\n");
}
