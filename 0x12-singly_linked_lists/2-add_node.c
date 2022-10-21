#include "lists.h"

/**
 * add_node - a function that adds a new node at the beginning of a
 * list_t list
 * @head: the address of a pointer to list_t list.
 * @str: the string to be duplicated
 * Return: returns the address of the new element or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *temp = NULL;
	size_t i, count = 0;

	temp = malloc(sizeof(list_t));
	if (temp == NULL)
		return (NULL);

	temp->str = strdup(str);
	for (i = 0;  *(str + i) != '\0'; i++)
		count++;
	temp->len = count;
	temp->next = *head;

	*head = temp;
	return (temp);
}
