#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * pop_listint - behead the snake (linked list)
 * @head: double pointer to the listint_t list
 *
 * Return: the head data
 */
int pop_listint(listint_t **head)
{
	listint_t *hold;
	int data;

	if (!head || !*head)
	{
		return (0);
	}
	else
	{
		data = (*head)->n;
		hold = (*head)->next;
		free(*head);
		*head = hold;
	}
	return (data);
}
