#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a linked list
 * @head: head pointer
 * @index: index of node
 *
 * Return: nth node of linked list
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *ptr;
	unsigned int i = 0;

	ptr = head;
	while (ptr != NULL)
	{
		if (i == index)
			return (ptr);
		i++;
		ptr = ptr->next;
	}
	return (0);
}
