#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * get_nodeint_at_index - access the indexed node to get itz data
 * @index: the index of the node
 *
 * Return: the head data
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current;
	unsigned int x;
	
	current = head;
	for (x = 0;x <= index - 1; x++)
	{
		if (!current)
		{
			return (NULL);
		}
		else
		{
			current = current->next;
		}
	}
	return (current);
}
