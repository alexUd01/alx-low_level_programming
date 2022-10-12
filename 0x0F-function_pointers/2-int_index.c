#include "function_pointers.h"

/**
 * int_index - a function that searches for an integer
 * @array: the array to be searched
 * @size: the number of elements in the array
 * @cmp: a pointer to the function to be used to compare values
 * Return: returns the index of the first element for which the cmp
 *                 function does not return 0 (on success)
 *         returns 0 if (size <= 0)
 *         returns -1 if no element matches
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, var;

	if (size <= 0)
		return (-1);
	if (array == NULL || cmp == NULL)
		return;
	for (i = 0; i < size; i++)
	{
		var = cmp(array[i]);
		if (var)
		{
			return (i);
		}
	}
	return (-1);
}
