#include <stdlib.h>
/* more headers goes there */
#include <stdio.h>
#include "main.h"
/**
*print_numbers - print numbs from 0 to 9
*Return: the output
*/
void print_numbers(void)
{
	/* your code goes there */
	int i;

	i = 0;
	for (; i < 10;)
	{
		_putchar (i);
		i++;
	}
	_putchar('\n');
}

