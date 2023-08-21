#include <stdlib.h>
/* more headers goes there */
#include <stdio.h>
#include "main.h"
/**
*print_rev - reverse that word
*@s: the input
*/

void print_rev(char *s)
{
	/* your code goes there */
	int count;
	int reve;

	while (*s != '\0')
	{
		s++;
		count++;
	}
	s--;
	for (reve = count; reve > 0; reve--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}

