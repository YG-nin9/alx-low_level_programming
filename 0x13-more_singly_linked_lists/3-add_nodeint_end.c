#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a linked list
 * @head: double pointer to the listint_t list
 * @n: new integer to b added in the node
 *
 * Return: the address of the new element, or NULL if it fails
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *end = *head;

	new = malloc(sizeof(listint_t));
	if (!new)
	{
		return (NULL);
	}

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (end->next)
	{
		end = end->next;
	}
	end->next = new;

	return (new);
}
