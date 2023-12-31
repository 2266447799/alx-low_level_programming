#include "lists.h"

/**
 * sum_listint - summ of all the data(n) of a linked list
 * @head: head pointer of a linked list
 *
 * Return: sum of all the data
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
