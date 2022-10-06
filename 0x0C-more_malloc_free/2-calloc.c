#include "main.h"

/**
 * _calloc - a function that allocates memory for an array, using malloc
 * @nmemb: number of elements
 * @size: size in bytes
 * Return: returns a pointer to the allocated memory (ON SUCCESS)
 *         returns NULL if (nmemb == 0) or (size == 0)
 *         returns NULL (ON FAILURE)
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *newStr;
	unsigned int i;

	if (nmemb == 0)
		return (NULL);
	if (size == 0)
		return (NULL);

	newStr = malloc(sizeof(*newStr) * nmemb * size);
	if (newStr == NULL)
		return (NULL);

	for (i = 0; i < nmemb; i++)
		newStr[i] = 0;
	newStr[i] = '\0';

	return (newStr);
}
