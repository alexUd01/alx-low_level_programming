#include "hash_tables.h"


/**
 * create_node - a function that creates a new hash table array node
 * @key: the key
 * @value: the value
 * Return: a pointer to the newly created hash table array node
 */
hash_node_t *create_node(const unsigned char *key, const char *value)
{
	hash_node_t *new_node;

	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (NULL);

	new_node->key = malloc(sizeof(key));
	new_node->value = malloc(sizeof(value));

	/* TODO-DONE: use strcpy if `assignment operator` fails */
	strcpy(new_node->key, (char *)key);
	strcpy(new_node->value, (char *)value);
	new_node->next = NULL;

	return (new_node);
}

/**
 * hash_table_set - a function that adds an element to the hash table
 * @ht: the hash table you want to add or update the key/value to
 * @key: the key.
 *       @key cannot be an empty string.
 * @value: the value associated with the key.
 *         @value must be duplicated.
 *         @value can be an empty string
 * Return: 1 if succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *temp, *ptr;

	if (ht == NULL)
		return (0); /* TODO-DONE: do something here */

	if (key == NULL)
		return (0); /* TODO-DONE: do something here */

	if (strcmp(key, "") == 0)
		return (0); /* TODO-DONE: handle empty string keys */

	index = key_index((const unsigned char *)key, ht->size);

	temp = create_node((const unsigned char *)key, value);
	if (temp == NULL)
		return (0); /* TODO-DONE: malloc failed. Do something */

	/* Case 1: no collision */
	if (ht->array[index] == NULL)
	{
		ht->array[index] = temp;
		return (1);
	}

	/* case 2: collision occured */
	if (ht->array[index] != NULL)
	{
		/* don't replace value. value must be duplicated */
		ptr = ht->array[index];
		while (ptr->next != NULL)
			ptr = ptr->next;
		ptr->next = temp;
		return (1);
	}
	printf("Not implemented yet");
	return (0);
}
