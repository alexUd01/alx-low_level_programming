#include "main.h"

/**
 * _realloc - a function that reallocates a memory block using malloc and free
 * @ptr: a pointer to the memory previously allocated with a call to malloc
 * @old_size: the size in bytes of the allocated space for ptr
 * @new_size: the new size in bytes of the memory block
 * Return: returns a pointer to the newly allocated space in memory
 *         returns ptr if new_size == old_size
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	char *arr;
	char **pptr = ptr;

	if (new_size == old_size)
		return (ptr);

	if (pptr == NULL)
	{
		arr == malloc(new_size);
		return (arr);
	}
	if (pptr != NULL && new_size == 0)
	{
		free(pptr);
		return (NULL);
	}
	if (new_size > old_size)
	{
		arr = malloc(new_size);
		for (i = 0; i < old_size; i++)
		{
			arr[i] = pptr[i];
		}
		free(pptr);
		return (arr);
	}
	return (pptr);
}
void simple_print_buffer(char *buffer, unsigned int size)
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
 * main - check the code for
 *
 * Return: Always 0.
 */
int main(void)
{
    char *p;
    int i;

    p = malloc(sizeof(char) * 10);
    p = _realloc(p, sizeof(char) * 10, sizeof(char) * 98);
    i = 0;
    while (i < 98)
    {
        p[i++] = 98;
    }
    simple_print_buffer(p, 98);
    free(p);
    return (0);
}
