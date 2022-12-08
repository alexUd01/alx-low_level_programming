#include "lists.h"

/**
 * *add_dnodeint_end - a  function that adds a new node at the end of a
 * dlistint_t list.
 * @head: the address of a pointer to the first node of the list
 * @n: the data to add at the end of the linked list
 * Return: the address of the new node (ON SUCCESS), retrns NULL (ON FAILURE)
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *ptr, *new;

	/* create new node */
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->prev = NULL;
	new->n = n;
	new->next = NULL;

	/* assign new node to head if head is NULL */
	if (head == NULL || *head == NULL)
	{
		*head = new;
		return (new);
	}

	/* adds node at the end */
	ptr = *head;
	while (ptr->next != NULL)
	{
		ptr = ptr->next;
	}
	new->prev = ptr;
	ptr->next = new;

	return (new);
}
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    dlistint_t *head;

    head = NULL;
    add_dnodeint_end(&head, 0);
    add_dnodeint_end(&head, 1);
    add_dnodeint_end(&head, 2);
    add_dnodeint_end(&head, 3);
    add_dnodeint_end(&head, 4);
    add_dnodeint_end(&head, 98);
    add_dnodeint_end(&head, 402);
    add_dnodeint_end(&head, 1024);
    print_dlistint(head);
    return (EXIT_SUCCESS);
}
