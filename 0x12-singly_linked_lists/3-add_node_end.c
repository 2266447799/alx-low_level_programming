#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list.
 * @head: singly linked list
 * @str: string to be added
 *
 * Return: adress of the new element,
 * or NULL if it failed.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	char *str_dup;
	int length;
	list_t *temp, *ptr;

	temp = malloc(sizeof(list_t));
	if (temp == NULL)
		return (NULL);

	str_dup = strdup(str);
	if (str_dup == NULL)
	{
		free(temp);
		return (NULL);
	}

	for (length = 0; str_dup[length];)
		length++;

	temp->str = str_dup;
	temp->len = length;
	temp->next = NULL;

	if (*head == NULL)
		*head = temp;
	else
	{
		ptr = *head;
		while (ptr->next != NULL)
			ptr = ptr->next;
		ptr->next = temp;
	}

	return (*head);
}
