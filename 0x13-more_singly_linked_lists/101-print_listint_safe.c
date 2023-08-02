#include "lists.h"

/**
 * print_listint_safe - prints a linked list
 * @head: pointer
 *
 * Return: number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count;
	unsigned int i;
	const listint_t *ptr, *ptr2;

	if (head == NULL)
		return (0);

	count = 0;
	ptr = head;
	while (ptr != NULL)
	{
		printf("[%p} %d\n", (void *)ptr, ptr->n);
		count++;
		ptr = ptr->next;
		ptr2 = head;
		for (i = 0; i < count; i++)
		{
			if (ptr == ptr2)
			{
				printf("-> [%p] %d\n", (void *)ptr, ptr->n);
				return (count);
			}
			ptr2 = ptr2->next;
		}
	}
	return (count);
}
