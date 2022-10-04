#include "main.h"

/**
 * alloc_grid - a function that returns a pointer to a 2 dimensional
 * array of integers
 * @width: the height of the array
 * @height: the width of the array
 * Return: returns a pointer to the array (on success)
 *         returns NULL on failure
 *         returns NULL if height or width is less than or equal to 0
 */
int **alloc_grid(int width, int height)
{
	int **arr, *ptr;
	int i, j;
	int len = 0;

	if (width <= 0 || height <= 0)
		return (NULL);

	len = (sizeof(int *) * height) + (sizeof(int) * width * height);
	arr = (int **)malloc(len);
	if (arr == NULL)
		return (NULL);

	ptr = (int *)(arr + height);

	for (i = 0; i < height; i++)
		arr[i] = (ptr + width * i);

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			arr[i][j] = 0;
		}
	}
	return (arr);
}
