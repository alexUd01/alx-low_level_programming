#include "main.h"

/**
 * malloc_checked - a function that allocates memory using malloc
 * @b: size of memory in bytes to be allocated
 * Return: returns a pointer to the allocated memory (on success)
 *         * if malloc_checked function fails it causes normal process
 *           termination with staus value 98
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
		exit(98);
	return (ptr);
}
