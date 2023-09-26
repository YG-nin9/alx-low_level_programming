#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * free_listint - free the heap
 * @head: double pointer to the listint_t list
 *
 * Return: nothing i am a void u fool
 */
void free_listint(listint_t *head)
{
	listint_t *holds;

	while (head)
	{
		holds = head->next;
		free(head);
		head = holds;
	}
}
