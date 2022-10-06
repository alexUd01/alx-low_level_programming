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
	int i = 0, j = 0, c = 0;
	int *arr;

	if (min > max)
		return (NULL);

	c = max - min + 1;
	arr = malloc(sizeof(int) * c);
	if (arr == NULL)
		return (NULL);

	for (i = min; i <= max; i++, j++)
	{
		arr[j] = i;
	}
	return (arr);
}
