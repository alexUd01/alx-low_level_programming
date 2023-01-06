#include "hash_tables.h"

/**
 * key_index - a function that gives you the index of a key
 * @key: the key
 * @size: the size of the array
 * Return: returns the index at which the key/value pair should be stored
 *         in the array of the hash table
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	if (key == NULL)
	{
		printf("Do something"); /* TODO: do something */
		exit(1);
	}

	return (hash_djb2(key) % size);
}

int main(void)
{
    char *s;
    unsigned long int hash_table_array_size;

    hash_table_array_size = 1024;
    s = "cisfun";
    printf("%lu\n", hash_djb2((unsigned char *)s));
    printf("%lu\n", key_index((unsigned char *)s, hash_table_array_size));
    s = "Don't forget to tweet today";
    printf("%lu\n", hash_djb2((unsigned char *)s));
    printf("%lu\n", key_index((unsigned char *)s, hash_table_array_size));
    s = "98";
    printf("%lu\n", hash_djb2((unsigned char *)s));
    printf("%lu\n", key_index((unsigned char *)s, hash_table_array_size));  
    return (EXIT_SUCCESS);
}
