#include <stdio.h>
#include "lists.h"

/**
 * listint_len - returns the number of nodes of a linked list
 * @h: pointer to the list_t list to print
 *
 * Return: the number of nodes printed
 */
size_t listint_len(const listint_t *h)
{
size_t s = 0;

while (h)
{
if (!h->n)
printf("[0] (nil)\n");
else
h = h->next;
s++;
}
return (s);
}

