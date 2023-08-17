#include <stdlib.h>
/* more headers goes there */
#include <stdio.h>
#include "main.h"
/**
*print_numbers - print numbs from 0 to 9
*Return: void
*/
void print_numbers(void)
{
	/* your code goes there */
	char i;

	for (i = '0'; i <= '9'; i++)
	{
		_putchar (i);
	}
	_putchar('\n');
}

