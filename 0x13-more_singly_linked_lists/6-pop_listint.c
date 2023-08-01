#include "lists.h"

/**
 * pop_listint - deletes the head node of a list
 * @head: head pointer
 *
 * Return: head node's data(n)
 * if linked list is empty return 0
 */
int pop_listint(listint_t **head)
{
	int data;
	listint_t *temp;

	if (*head == NULL)
		return (0);

	data = (*head)->n;
	temp = *head;
	*head = (*head)->next;
	free(temp);

	return (data);
}
