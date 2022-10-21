#include "lists.h"

/**
 * list_len - a function that returns the number of elements in a linked
 * list_t list.
 * @h: a pointer to the first node of the linked list
 * Return: returns the number of elements in a linked list.
 */
size_t list_len(const list_t *h)
{
	const list_t *ptr = h;
	size_t i;

	if (ptr == NULL)
		return(-1);
	while (ptr != NULL)
	{
		i++;
		ptr = ptr->next;
	}
	return (i);
}
int main(void)
{
    list_t *head;
    list_t *new;
    list_t hello = {"World", 5, NULL};
    size_t n;

    head = &hello;
    new = malloc(sizeof(list_t));
    if (new == NULL)
    {
        printf("Error\n");
        return (1);
    }
    new->str = strdup("Hello");
    new->len = 5;
    new->next = head;
    head = new;
    n = list_len(head);
    printf("-> %lu elements\n", n);
    free(new->str);
    free(new);
    return (0);
}
