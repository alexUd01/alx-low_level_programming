#include "main.h"

/**
 * create_array - a function that creates an array of chars and
 * initializes it with a specific char
 * @size: the size of array to be created
 * @c: the character to be initialized with
 * Return: returns a pointer to the array if successful,
 *         returns NULL if size = 0,
 *         returns NULL if it fails.
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
		return (NULL);
	arr = (char *)malloc(size * sizeof(char));
	for (i = 0; i < size; i++)
	{
		if (arr == NULL)
			return (NULL);
		arr[i] = c;
	}
	arr[i] = '\0';
	return (arr);
}
