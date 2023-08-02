#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to pointer
 * @idx: index of the list
 * @n: value to be stored
 *
 * Return: address of the new node
 * or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *ptr, *ptr2;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);

	ptr = malloc(sizeof(listint_t));
	if (ptr == NULL)
		return (NULL);

	ptr->n = n;

	if (idx == 0)
	{
		ptr->next = *head;
		*head = ptr;
		return (ptr);
	}

	ptr2 = *head;

	while (ptr2 != NULL)
	{
		if (i + 1 == idx)
		{
			ptr->next = ptr2->next;
			ptr2->next = ptr;
			return (ptr);
		}
		ptr2 = ptr2->next;
		i++;
	}
	free(ptr);
	return (NULL);
}
