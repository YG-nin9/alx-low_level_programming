#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * get_nodeint_at_index - access the indexed node to get itz data
 * @head: the linked list
 * @index: the index of the node
 *
 * Return: the head data
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current;
	unsigned int x;

	x = 0;
	current = head;
	while (current && (x < index))
	{
		for (; x < index; x++)
		{
			current = current->next;
		}
	}
	return (current ? current : NULL);
}
