#include "lists.h"

/**
 * free_listint - frees a listint_t list
 * @head: head pointer for the list
 */
void free_listint(listint_t *head)
{
	listint_t *next, *temp;

	temp = head;
	while (temp != NULL)
	{
		next = temp->next;
		free(temp);
		temp = next;
	}
}
