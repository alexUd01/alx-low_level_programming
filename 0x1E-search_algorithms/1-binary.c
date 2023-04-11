#include "search_algos.h"

/**
 * print_array - a helper function that prints out sub-arrays
 * @arr: the sub array to be printed out
 * @l_idx: the leftmost index of the array
 * @r_idx: the righemost index of the array
 */
void print_array(int *arr, int l_idx, int r_idx)
{
	int i;

	printf("Searching in array: ");
	for (i = l_idx; i <= r_idx; i++)
	{
		if (i != l_idx)
			printf(", ");
		printf("%d", arr[i]);
	}
	printf("\n");
}

/**
 * recurse_search - a helper function that recursively searches for an
 *                  integer in a given array
 * @arr: a pointer to the array to be searched
 * @val: the integer to be searched for
 * @l_idx: the left index to start from
 * @r_idx: the right index to stop at
 * Return: returns the index of the integer if found (SUCCESS)
 *         returns -1 if not found
 */
int recurse_search(int *arr, int val, int l_idx, int r_idx)
{
	int mid = l_idx + (r_idx - l_idx) / 2;

	/* Base/Stop condition */
	if (l_idx > r_idx)
		return (-1);

	/* Print currently searched array */
	print_array(arr, l_idx, r_idx);

	if (arr[mid] == val)
		return (mid);
	else if (arr[mid] > val)
		return (recurse_search(arr, val, l_idx, mid - 1));
	else
		return (recurse_search(arr, val, mid + 1, r_idx));

	return (mid);
}

/**
 * binary_search - a function that searches for avalue in a sorted array
 *                 of integers using the Binary search algorithm
 * @array: a pointer to the first element of the array to search in
 * @size: the size of the array
 * @value: the value to search for
 *         * Assumption: @value won't appear more than once
 * Return: returns the index where @value is located in @array
 *         returns -1 if @value is not present or @array is NULL
 */
int binary_search(int *array, size_t size, int value)
{
	int index;

	if (!array)
		return (-1);

	index = recurse_search(array, value, 0, size - 1);

	return (index);
}
