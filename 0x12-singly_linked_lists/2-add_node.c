#include <string.h>
#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list.
 * @head: pointer to the singly linked list(list_t)
 * @str: string to be added
 *
 * Return: the address of the new element,
 * or NULL if it failed.
 */
list_t *add_node(list_t **head, const char *str)
{
	char *str_dup;
	int length;
	list_t *ptr;

	ptr = malloc(sizeof(list_t));
	if (ptr == NULL)
		return (NULL);

	str_dup = strdup(str);
	if (str_dup == NULL)
	{
		free(ptr);
		return (NULL);
	}

	for (length = 0; str_dup[length];)
		length++;

	ptr->str = str_dup;
	ptr->len = length;
	ptr->next = *head;

	*head = ptr;

	return (ptr);
}
