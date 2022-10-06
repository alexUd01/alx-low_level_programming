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

	if (nmemb == 0 || size == 0)
		return (NULL);

	newStr = (char *)malloc(nmemb * size);
	if (newStr == NULL)
		return (NULL);

	for (i = 0; i < nmemb; i++)
		newStr[i] = 0;
	newStr[i] = '\0';

	return (newStr);
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
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *a;

    a = _calloc(98, sizeof(char));
    strcpy(a, "Best");
    strcpy(a + 4, " School! :)\n");
    a[97] = '!';
    simple_print_buffer(a, 98);
    free(a);
    return (0);
}
