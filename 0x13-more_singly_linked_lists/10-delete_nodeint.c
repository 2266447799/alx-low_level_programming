#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index of a linked list
 * @head: pointer to pointer
 * @index: indexof the node that should be deleted
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *ptr, *ptr2 = *head;
	unsigned int i = 0;

	if (ptr2 == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(ptr2);
		return (1);
	}

	for (i = 0; i < (index - 1); i++)
	{
		if (ptr2->next == NULL)
			return (-1);

		ptr2 = ptr2->next;
	}

	ptr = ptr2->next;
	ptr2->next = ptr->next;
	free(ptr);
	return (1);
}
