#include "main.h"

/**
 * print_array - a function nts n elements of an array of integers,
 * followed by a new line
 * @a: the array
 * @n: the number of elements of the array to be printed
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i <= n; i++)
	{
		printf("%d, ", a[i]);
	}
}
{
	int i;

	if (n != 0 && n != 1)
		for (i = 0; i < n; i++)
		{
			if (i != (n - 1))
				printf("%d, ", a[i]);
			else if (i == (n - 1))
				printf("%d", a[i]);
		}
	printf("\n");
}
