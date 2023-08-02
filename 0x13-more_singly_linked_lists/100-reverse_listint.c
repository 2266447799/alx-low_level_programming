#include "lists.h"

/**
 * reverse_listint - reverses a linked list
 * @head: pointer
 *
 * Return: pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *ahead, *prev;

	if (head == NULL || *head == NULL)
		return (NULL);

	prev = NULL;

	while ((*head)->next != NULL)
	{
		ahead = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = ahead;
	}

	(*head)->next = prev;

	return (*head);
}
