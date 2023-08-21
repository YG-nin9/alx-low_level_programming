#include "main.h"
/**
 * puts2 - the even only
 * @str: input
 * return: 0
 */
void puts2(char *str)
{
	int counter = 0;
	int i = 0;
	char pe = str[i];

	while (str[counter] != '\0')
	{
		pe = str[counter];
		counter = counter +2;
		i++;
		_putchar(pe);
	}
	_putchar('\n');
}

