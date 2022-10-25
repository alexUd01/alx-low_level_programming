#include "lists.h"

/**
 * find_listint_loop - a function that finds the loop in a linked list
 * @head: a pointer to the first node of the list
 * Return: returns the address of the node where the loop starts (SUCCESS)
 *         or NULL if there is no loop
 */
listint_t *find_listint_loop(listint *head)
{
	listint_t *slow = head;
	listint_t *fast = head;

	if (!head)
		return (NULL);

	while (slow && fast && fast->next)
	{
		fast = fast->next->next;
		slow = slow->next;
		if (fast == slow)
		{
			slow = head;
			while (slow != fast)
			{
				slow = slow->next;
				fast = fast->next;
			}
			return (fast);
		}
	}

	return (NULL);
}
