#include "hash_tables.h"

void print_list(hash_node_t *ptr, int *first_initialized_item_flag)
{
	while (ptr != NULL)
	{
		if (first_initialized_item_flag == 0)
		{
			printf("'%s': '%s'", ptr->key, ptr->value);
			*first_initialized_item_flag = 1;
			break;
		}
		printf(", '%s': '%s'", ptr->key, ptr->value);
		ptr = ptr->next;
	}
}

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
	unsigned long i;
	int first_initialized_item_flag;

	if (ht == NULL)
	{
		printf("{}\n");
		return;
	}

	/* if ht != NULL */
	putchar('{');
	first_initialized_item_flag = 0;
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			print_list(ht->array[i],
				   &first_initialized_item_flag);
		}
	}
	printf("}\n");
}
