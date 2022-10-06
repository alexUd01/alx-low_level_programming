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

	return (arr);
}
void simple_print_buffer(int *buffer, unsigned int size)
{
    unsigned int i;

    i = 0;
    while (i < size)
    {
        if (i % 10)
        {
            printf(" ");
        }
        if (!(i % 10) && i)
        {
            printf("\n");
        }
        printf("0x%02x", buffer[i]);
        i++;
    }
    printf("\n");
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int *a;
    int i;

    a = array_range(2, 10);
    for (i = 0; i <= 10; i++)
	    printf("%d ", a[i]);
    printf("\n");
    simple_print_buffer(a, 11);
    free(a);
    return (0);
}
