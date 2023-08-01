#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 * @head: head pointer to pointer
 */
void free_listint2(listint_t **head)
{
	listint_t *next, *temp;

	if (head == NULL || *head == NULL)
		return;

	temp = *head;
	while (temp != NULL)
	{
		next = temp->next;
		free(temp);
		temp = next;
	}

	*head = NULL;
}
