#include <stdlib.h>
/* more headers goes there */
#include <stdio.h>
#include "main.h"
/**
*more_numbers - print numbs from 0 to 14 x10 times
*Return: void
*/
void more_numbers(void)
{
	/* your code goes there */
	char i;
	int count;

	count = 0;
	while (count <= 9)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i >= 10)
			{
				_putchar ('1');
			}
			_putchar (i % 10 + '0');
		}
	_putchar('\n');
	count++;
	}
}

