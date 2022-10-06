#include "main.h"

/**
 * array_range - a function that creates an array of integers
 * @min: number of elements
 * @max: size in bytes
 * Return: returns a pointer to the allocated memory (ON SUCCESS)
 *         returns NULL if (min > max)
 *         returns NULL (ON FAILURE)
 */
int *array_range(int min, int max)
{
	int *arr;
	int i, len;

	if (min > max)
		return (NULL);

	len = max - min + 1;
	arr = malloc(sizeof(*arr) * len);
	if (arr == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
	{
		arr[i] = min;
		min++;
	}
	arr[i] = '\0';

	return (arr);
}
