#include <stdio.h>

/**
 * array_iterator - a function that executes a function given as a
 * parameter on each element of an array.
 * @array: a pointer to the first element of the array
 * @size: the size of the array
 * @action: a pointer to the function you need to use
 * Return: returns nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (action == NULL || size <= 0|| array == NULL)
		return;
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}

