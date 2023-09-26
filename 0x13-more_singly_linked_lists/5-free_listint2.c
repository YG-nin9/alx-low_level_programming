#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * free_listint2 - free the heap and behead the head
 * @head: double pointer to the listint_t list
 *
 * Return: nothing i am a void u fool
 */
void free_listint2(listint_t **head)
{

	while (head)
	{
		free(head);
		head = NULL;
	}
}
